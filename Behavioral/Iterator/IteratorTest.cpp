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
 
#include "IteratorTest.h"
#include "Player.h"
#include "MiniRaid.h"
#include "RaidIterator.h"

#include <iostream>
using namespace std;
namespace IteratorPattern
{
    void IteratorTest()
    {        
        shared_ptr<Player> tank1(new Player("Anduin", "Warrior", "Tank"));
        shared_ptr<Player> tank2(new Player("Munch", "Death Knight", "Tank"));

        shared_ptr<Player> healer1(new Player("A'moora", "Priest", "Healer"));
        shared_ptr<Player> healer2(new Player("Number Nine Jia", "Monk", "Healer"));
        shared_ptr<Player> healer3(new Player("Renferal", "Druid", "Healer"));

        shared_ptr<Player> dps1(new Player("Uther", "Paladin", "Melee Damage Dealer"));
        shared_ptr<Player> dps2(new Player("Khadgar", "Mage", "Ranged Damage Dealer"));
        shared_ptr<Player> dps3(new Player("Javad", "Shaman", "Ranged Damage Dealer"));
        shared_ptr<Player> dps4(new Player("Altruis", "Demon Hunter", "Melee Damage Dealer"));
        shared_ptr<Player> dps5(new Player("Gakin", "Warlock", "Ranged Damage Dealer"));

        shared_ptr<MiniRaid> ulduarRaid(new MiniRaid());

        ulduarRaid->push(tank1);
        ulduarRaid->push(tank2);
        ulduarRaid->push(healer1);
        ulduarRaid->push(healer2);
        ulduarRaid->push(healer3);
        ulduarRaid->push(dps1);
        ulduarRaid->push(dps2);
        ulduarRaid->push(dps3);
        ulduarRaid->push(dps4);
        ulduarRaid->push(dps5);

        unique_ptr<RaidIterator> raidNavigator(new RaidIterator(ulduarRaid));       

        for (raidNavigator->first(); !raidNavigator->isDone(); raidNavigator->next())
        {
            auto curPlayer = raidNavigator->currentItem();
            cout << "Name:[" << curPlayer->getName() << "] Class:[" << curPlayer->getClass() << "] Role:[" << curPlayer->getRole() << "]" << endl;
        }
    }
}