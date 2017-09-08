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
#include <vector>
using namespace std;

#include "MiniRaid.h"
#include "Party.h"

namespace CompositePattern
{
	class VanillaRaid : public PlayerGroup //40 men group
	{
		vector<shared_ptr<MiniRaid>> m_Raids; 		
	public:
		void add(shared_ptr<MiniRaid> raid) { m_Raids.push_back(raid); } //could also add parties
		virtual void EngageInFight()
		{
			cout << "Old school raid group engaging" << endl;
			for (auto raid : m_Raids)
			{
				raid->EngageInFight();
			}
			cout << "Old school raid group finished engaging" << endl;
		}
	};
}