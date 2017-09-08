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
using namespace std;

#include "Profession.h"
namespace TemplateMethodPattern
{
    class Alchemy : public Profession
    {
    public:
        virtual void BuyAllMaterials()
        {
            cout << "Character buys gazzillions of herbs" << endl;
        }
        virtual void GrindJourneyMan()
        {
            cout << "Character crafts a bunch minor, lesser, normal healing potions" << endl;
        }
        virtual void GrindExpert()
        {
            cout << "Character crafts a bunch of greating healing potions, agility and defense elixirs" << endl;
        }
        virtual void GrindArtisan()
        {
            cout << "Character crafts a bunch of greater agility elixirs, superior mana potions" << endl;
        }
        virtual void GrindMaster()
        {
            cout << "Character crafts a bunch of volatile, super healing potions, major sleepless dream potions" << endl;
        }
    };
}