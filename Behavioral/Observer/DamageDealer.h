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
#include <string>
using namespace std;

namespace ObserverPattern
{
    class DamageDealer : public Player
    {
    public:
        DamageDealer(string strName) : Player(strName) {}
        virtual void NotifyPhaseSwitch(int nPhaseNumber)
        {
            switch(nPhaseNumber)
            {                
                case 2:
                    cout << "Phase 2, DamageDealer " << getName() << " gets out of lava" << endl;
                    break;
                case 3:
                    cout << "Phase 3, DamageDealer " << getName() << " uses offensive cooldowns." << endl;
                    break;                                 
            }
        }
        virtual void NotifyAddsSpawn()
        {
            cout << "AddsSpawn, DamageDealer " << getName() << " on adds." << endl;
        }
    };
}