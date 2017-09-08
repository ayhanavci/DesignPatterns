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

#include "PlayerGroup.h"

namespace CompositePattern
{
	class MiniRaid : public PlayerGroup //10 men group
	{
		vector<shared_ptr<PlayerGroup>> m_Parties;
	public:
		void add(shared_ptr<PlayerGroup> party) { m_Parties.push_back(party); }
		virtual void EngageInFight()
		{
			cout << "Mini raid group engaging" << endl;
			for (auto party : m_Parties)
			{
				party->EngageInFight();
			}
			cout << "Mini raid group finished engaging" << endl;
		}
	};
}