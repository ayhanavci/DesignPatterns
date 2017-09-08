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

#include "Team.h"
#include "PlateTeamFactory.h"
#include "StealthTeamFactory.h"
#include <memory>
using namespace std;
namespace FactoryPattern
{
	class LookingForGroupTool
	{
	public:
		static auto GetFullTeam(string teamType)
		{
			shared_ptr<Team> LFGTeam(new Team());
			unique_ptr<TeamFactory> pTeamFactory;

			if (teamType == "Plate")
			{
				pTeamFactory.reset(new PlateTeamFactory());
			}
			else if (teamType == "Stealth")
			{
				pTeamFactory.reset(new StealthTeamFactory());
			}
			
			LFGTeam->m_Tank.reset(pTeamFactory->getTank());
			LFGTeam->m_Healer.reset(pTeamFactory->getHealer());
			LFGTeam->m_Dps1.reset(pTeamFactory->getDps1());
			LFGTeam->m_Dps2.reset(pTeamFactory->getDps2());
			LFGTeam->m_Dps3.reset(pTeamFactory->getDps3());

			return LFGTeam;
			
		}
	};
}