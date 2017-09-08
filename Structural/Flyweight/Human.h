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

#include <string>
#include <iostream>
using namespace std;

#include "PlayerRace.h"
#include "HumanBaseStats.h"
namespace FlyweightPattern
{
	class Human : public PlayerRace
	{
		string m_strAllegiance;
	public:
		Human(string allegiance) : m_strAllegiance(allegiance) {}
	public:
		virtual void DisplayBaseRaceStats()
		{
			cout << "Stats of the Human with allegiance to " << m_strAllegiance << endl;
			cout << "Strength: " << HumanBaseStats::Strength << endl;
			cout << "Intelligence: " << HumanBaseStats::Intelligence << endl;
			cout << "Spirit: " << HumanBaseStats::Spirit << endl;
			cout << "Stamina: " << HumanBaseStats::Stamina << endl;
			cout << "Agility: " << HumanBaseStats::Agility << endl;
		}
	};
}