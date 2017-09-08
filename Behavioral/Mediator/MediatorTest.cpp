/*
The MIT License
Copyright (c) 2017 Ayhan AVCI

Permission is hereby granted, free of charge, to any person obtaining a copy of this software 
and associated documentation files (the "Software"), to deal in the Software without restriction, 
including without limitation the rights to use, copy, modify, merge, publish, distribute, 
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software 
is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in 
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE 
AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
 
#include "MediatorTest.h"

#include "Healer.h"
#include "DamageDealer.h"
#include "Tank.h"
#include "RaidLeader.h"
#include "Boss.h"

namespace MediatorPattern
{
    void MediatorTest()
    {
        shared_ptr<RaidLeader> leader(new RaidLeader()); //Tells the party what to do.
        

        shared_ptr<Boss> evilBoss(new Boss("High Inquisitor Whitemane", leader));
        
        shared_ptr<Player> tankPlayer(new Tank("Beefy Guy", leader)); //Can Taunt, DD
        shared_ptr<Player> healerPlayer(new Healer("BandAid Dude", leader)); //Can Heal, CR, DD
        
        shared_ptr<Player> dpsPlayer1(new DamageDealer("Good Dps", false, leader)); //Can DD
        shared_ptr<Player> dpsPlayer2(new DamageDealer("Jenkins Dps", false, leader)); //Can DD, takes a lot of damage, takes aggro
        shared_ptr<Player> dpsPlayer3(new DamageDealer("Utility Dps", true, leader)); //can bloodlust, CR, DD

        healerPlayer->setCombatRes();
        dpsPlayer3->setCombatRes();

        leader->AddPlayer(tankPlayer);
        leader->AddPlayer(healerPlayer);
        leader->AddPlayer(dpsPlayer1);
        leader->AddPlayer(dpsPlayer2);
        leader->AddPlayer(dpsPlayer3);
        leader->setBoss(evilBoss);

        //Encounter begins!

        //Tank charges the boss
        tankPlayer->DealDamage(evilBoss); 
        //Dpsers follow
        dpsPlayer1->DealDamage(evilBoss); 
        dpsPlayer2->DealDamage(evilBoss); 
        dpsPlayer3->DealDamage(evilBoss); 
        //Healer likes to help 
        healerPlayer->DealDamage(evilBoss); 
        //Ooops boss got mad, tank and a dpser are now low hp. Jenkins dies!
        tankPlayer->OnLowHP(); //Leader tells the healer to heal this player here
        dpsPlayer3->OnLowHP(); //Leader tells the healer to heal this player here
        dpsPlayer2->OnDead(); //Leader asks all players if they can CR and is not on CD. If able, tells the player to CR the dead one
        //All is well again, encounter continues
        dpsPlayer1->DealDamage(evilBoss); 
        dpsPlayer2->DealDamage(evilBoss); 
        dpsPlayer3->DealDamage(evilBoss); 
        //Jenkins got aggro       
        dpsPlayer2->OnGotAggro(); //Leader tells the tank to taunt here
        dpsPlayer2->OnLowHP(); //Leader tells the healer to heal this player here
        //Boss is low hp!
        evilBoss->OnLowHP(); //Leader bloodlusts here
        //Everyone go nuts (extra damage due to BL)
        tankPlayer->DealDamage(evilBoss); 
        healerPlayer->DealDamage(evilBoss); 
        dpsPlayer1->DealDamage(evilBoss); 
        dpsPlayer2->DealDamage(evilBoss); 
        dpsPlayer3->DealDamage(evilBoss); 
        //Jenkins dies again
        dpsPlayer2->OnDead(); //Leader asks all players if they can CR and is not on CD. If able, tells the player to CR the dead one 
        dpsPlayer2->OnLowHP(); //Leader tells the healer to heal this player here       
        //Boss dies!
        evilBoss->OnDead(); //Leader tells everyone it is time to celebrate
        return;
    } 
}