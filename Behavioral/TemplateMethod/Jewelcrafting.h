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
    class Jewelcrafting : public Profession
    {
    public:
        virtual void BuyAllMaterials()
        {
            cout << "Character buys a lot of metal bars, some rubies, draenites etc." << endl;
        }
        virtual void GrindJourneyMan()
        {
            cout << "Character crafts a bunch of silver and bronze rings" << endl;
        }
        virtual void GrindExpert()
        {
            cout << "Character crafts a bunch of mithril and truesilver rings" << endl;
        }
        virtual void GrindArtisan()
        {
            cout << "Character crafts a bunch of thorium rings" << endl;
        }
        virtual void GrindMaster()
        {
            cout << "Character crafts a bunch of garnets, fel iron rings" << endl;
        }
    };
}