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
 
#include "FactoryTest.h"
#include "LookingForGroupTool.h"

#include <memory>
#include <map>
using namespace std;

namespace FactoryPattern
{
	
	void FactoryTest()
	{
		shared_ptr<Team> newTeam;
		vector<string> teamTypes{ "Plate", "Stealth" };

		for (auto tType : teamTypes)
		{
			cout << tType << " team created" << endl;
			newTeam = LookingForGroupTool::GetFullTeam(tType);

			newTeam->m_Tank->PrintProperties();
			newTeam->m_Healer->PrintProperties();
			newTeam->m_Dps1->PrintProperties();
			newTeam->m_Dps2->PrintProperties();
			newTeam->m_Dps3->PrintProperties();
		}
	}
		
	

}