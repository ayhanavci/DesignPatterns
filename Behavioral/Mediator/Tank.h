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
 
#pragma once

#include <iostream>
#include <memory>
using namespace std;

#include "Player.h"

namespace MediatorPattern
{
    class Tank : public Player
    {
    public:
        Tank(string strName, shared_ptr<RaidLeader> leader) : Player(strName, leader) {}
        void Taunt(shared_ptr<Boss> bossToTaunt)
        {
            cout << "Tank " << getName() << " taunts " << bossToTaunt->getName() << endl;
            bossToTaunt->OnTaunted(getName());
        }
        virtual void DealDamage(shared_ptr<Boss> bossToDps)
        {
            int nDamage = 6;
            cout << "Tank " << getName() << " does some ok damage to " << bossToDps->getName() << endl;
            bossToDps->OnDamageTaken(nDamage + (isBloodlustActive() ? nDamage * 0.5 : 0));
        }
        
    };
}
