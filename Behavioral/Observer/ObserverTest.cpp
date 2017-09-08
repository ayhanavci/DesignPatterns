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
 
#include "ObserverTest.h"
#include "DeadlyBossMods.h"
#include "Tank.h"
#include "Healer.h"
#include "DamageDealer.h"

namespace ObserverPattern
{
    void ObserverTest()
    {
        //"Subject" of the pattern
        DeadlyBossMods dbm;
        
        //"Observer(s)" of the pattern
        shared_ptr<Tank> beefyDude(new Tank("Subutay"));
        shared_ptr<Healer> bandAid(new Healer("Kamui"));
        shared_ptr<DamageDealer> angryGuy1(new DamageDealer("Radon"));
        shared_ptr<DamageDealer> angryGuy2(new DamageDealer("Maldoror"));
        shared_ptr<DamageDealer> angryGuy3(new DamageDealer("Sabbah"));     
        
        //One-to-Many relationship
        dbm.attach(beefyDude);
        dbm.attach(bandAid);
        dbm.attach(angryGuy1);
        dbm.attach(angryGuy2);
        dbm.attach(angryGuy3);

        //Fire notifications
        dbm.BossPhaseSwitchDetected(2);
        dbm.AddsSpawnDetected();        
        dbm.AddsSpawnDetected();        
        dbm.BossPhaseSwitchDetected(3);
        dbm.AddsSpawnDetected();
        dbm.BossDown();        
    }
}