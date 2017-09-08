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

#include "ChainofResponsibilityTest.h"
#include "ChasingBoss.h"
#include "EnragingBoss.h"
#include "HeavyHittingBoss.h"
#include "ThreatResettingBoss.h"

namespace ChainofResponsibilityPattern
{
	void ChainofResponsibilityTest()
	{
		shared_ptr<ChasingBoss> firstDungeonBoss(new ChasingBoss());
		shared_ptr<EnragingBoss> secondDungeonBoss(new EnragingBoss());
		shared_ptr<HeavyHittingBoss> thirdDungeonBoss(new HeavyHittingBoss());
		shared_ptr<ThreatResettingBoss> fourthDungeonBoss(new ThreatResettingBoss());

		firstDungeonBoss->setNextBoss(secondDungeonBoss);
		secondDungeonBoss->setNextBoss(thirdDungeonBoss);
		thirdDungeonBoss->setNextBoss(fourthDungeonBoss);

		cout << "---- Low Dps Party entered the dungeon ----" << endl;
		firstDungeonBoss->AttemptToWipeParty("LowDpsParty");

		cout << "---- Low Healing Party entered the dungeon ----" << endl;
		firstDungeonBoss->AttemptToWipeParty("LowHealingParty");

		cout << "---- Bad  TankParty entered the dungeon ----" << endl;
		firstDungeonBoss->AttemptToWipeParty("BadTankParty");

		cout << "---- Low Mobility Party enterd the dungeon ----" << endl;
		firstDungeonBoss->AttemptToWipeParty("LowMobilityParty");

		cout << "---- Overpowered Party entered the dungeon ----" << endl;
		firstDungeonBoss->AttemptToWipeParty("OverpoweredParty");
	}
}