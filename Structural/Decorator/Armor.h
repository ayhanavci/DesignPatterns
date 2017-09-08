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
#include "DecoratorTest.h"
#include <string>
#include <memory>
#include <iostream>
using namespace std;

namespace DecoratorPattern
{
	class Armor
	{
	private:
		string m_strBaseStats; //str, int, agi etc		
		int m_nValue;		   //armor value. 							
	public:
		Armor(
			string strBaseStats = "N/A",
			int nValue = 0) :
			m_strBaseStats(strBaseStats), m_nValue(nValue) {}
	public:
		void setBaseStats(string strStats) { m_strBaseStats = strStats; }		
		void setValue(int nValue) { m_nValue = nValue; }

		string getStats() { return m_strBaseStats; }		
		int getValue() { return m_nValue; }
	public:
		void PrintBaseProperties()
		{
			cout << "Armor base stats:[" << getStats() << "] value:[" << getValue() << "] " << endl;
		}
		virtual void PrintDecoratedProperties() = 0;
	};

	void DecoratorTest();
}