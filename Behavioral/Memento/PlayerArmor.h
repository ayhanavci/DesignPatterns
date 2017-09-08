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

#include "ArmorAppearance.h"
#include <string>
#include <iostream>
using namespace std;

namespace MementoPattern
{
    //Originator
    class PlayerArmor
    {
    private:            
        ArmorAppearance m_TransmogArmor;
    public:
        void setHelm(string strHelm)
        {
            m_TransmogArmor.strHelm = strHelm;
        }
        void setShoulders(string strShoulders)
        {
            m_TransmogArmor.strShoulders = strShoulders;
        }
        void setChest(string strChest)
        {
            m_TransmogArmor.strChest = strChest;
        }
        void setGloves(string strGloves)
        {
            m_TransmogArmor.strGloves = strGloves;
        }
        void setPants(string strPants)
        {
            m_TransmogArmor.strPants = strPants;
        }        
    public:
        ArmorAppearance& saveState()
        {
            return m_TransmogArmor;
        }
        void restoreState(ArmorAppearance state)
        {
            m_TransmogArmor = state;
        }
        void FlexArmor()
        {
            cout << "Helm: " << m_TransmogArmor.strHelm << endl;
            cout << "Shoulders: " << m_TransmogArmor.strShoulders << endl;
            cout << "Chest: " << m_TransmogArmor.strChest << endl;
            cout << "Pants: " << m_TransmogArmor.strPants << endl;
            cout << "Gloves: " << m_TransmogArmor.strGloves << endl;
        }
    };
}