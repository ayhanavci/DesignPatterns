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

namespace TemplateMethodPattern
{
    class Profession
    {        
    public:    
        virtual void BuyAllMaterials() = 0;
        virtual void GrindJourneyMan() = 0;
        virtual void GrindExpert() = 0;
        virtual void GrindArtisan() = 0;
        virtual void GrindMaster() = 0;
    public:
        //Algorithm for grinding profession skill from 1 to 375
        void SkillUpToBurningCrusade()
        {            
            GetMoneyFromBank(); //Shared method            
            BuyAllMaterials(); //Template method
            
            GrindJourneyMan(); //Template method
            EmptyBags(); //Shared method

            GrindExpert(); //Template method
            EmptyBags(); //Shared method

            GrindArtisan(); //Template method
            EmptyBags(); //Shared method

            GrindMaster(); //Template method
            EmptyBags(); //Shared method
            
            cout << "Success!" << endl;

        }
        void GetMoneyFromBank()
        {
            cout << "Character goes to bank and gets money" << endl;
        }
        void EmptyBags()
        {
            cout << "Character sells every crafted item to vendor" << endl;
        }        
    };
}