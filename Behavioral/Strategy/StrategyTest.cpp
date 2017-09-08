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
 
#include "StrategyTest.h"
#include "DamageDealer.h"
#include "Rogue.h"
#include "Mage.h"
#include "Hunter.h"

namespace StrategyPattern
{
    void StrategyTest()
    {
       DamageDealer dd;

       shared_ptr<Rogue> weirdo(new Rogue());
       shared_ptr<Mage> nerd(new Mage());
       shared_ptr<Hunter> noob(new Hunter());

       //The outcome of this action is clear. Killing the npc. Every object should conclude the same outcome but in different ways.
       dd.KillNpc();
       
       dd.setStrategy(weirdo); //Kill it with the way of the rogue
       dd.KillNpc();

       dd.setStrategy(nerd); //Kill it with the way of the mage
       dd.KillNpc();

       dd.setStrategy(noob); //Kill it with the way of the hunter
       dd.KillNpc();
    
    }    
}