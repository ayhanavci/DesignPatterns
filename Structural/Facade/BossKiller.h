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
#include <memory>
using namespace std;

#include "Paladin.h"
#include "Priest.h"
#include "Rogue.h"
#include "Warlock.h"
#include "Warrior.h"

namespace FacadePattern
{
	class BossKiller
	{
		unique_ptr<Warrior> m_Tank;
		unique_ptr<Priest> m_Healer;
		unique_ptr<Paladin> m_dps1;
		unique_ptr<Rogue> m_dps2;
		unique_ptr<Warlock> m_dps3;
	public:
		void CreateParty()
		{
			m_Tank.reset(new Warrior());
			m_Healer.reset(new Priest());
			m_dps1.reset(new Paladin());
			m_dps2.reset(new Rogue());
			m_dps3.reset(new Warlock());
		}
		void KillBoss()
		{
			
			m_Tank->Charge();
			m_Tank->Devastate();
			m_dps1->Judgement();
			m_dps2->Mutilate();
			m_dps3->Immolate();
			m_Tank->IgnorePain();
			m_dps1->CrusaderStrike();
			m_Healer->CircleOfHealing();
			m_Healer->FlashHeal();
			m_dps3->Incinirate();
			m_dps2->KingsBane();
			m_dps3->ChaosBolt();
			m_Tank->ShieldSlam();
			m_dps1->TemplarsVerdict();

			m_Tank->Celebrate();
			m_Healer->Celebrate();
			m_dps1->Celebrate();
			m_dps2->Celebrate();
			m_dps3->Celebrate();

		}
	};
}