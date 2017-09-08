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
#include "ArmorDecorator.h"

namespace DecoratorPattern
{
	class ArmorWithAC : public ArmorDecorator
	{
		string m_strArmorClass; //Plate, Mail, Leather, Cloth
	public:
		ArmorWithAC(shared_ptr<Armor> decoratedArmor, string strArmorClass = "N/A") : ArmorDecorator(decoratedArmor), m_strArmorClass(strArmorClass) {}
	public:
		void setAC(string strAC) { m_strArmorClass = strAC; }
		string getAC() { return m_strArmorClass; }
	public:
		virtual void PrintDecoratedProperties()
		{
			ArmorDecorator::PrintDecoratedProperties();

			cout << "ArmorWithAC PrintDecoratedProperties. AC:[" << getAC() << "]" << endl;
		}

	};
}