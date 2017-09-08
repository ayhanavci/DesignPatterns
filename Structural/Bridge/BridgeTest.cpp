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
 
#include "BridgeTest.h"
#include "Healer.h"
#include "DamageDealer.h"
#include "Tank.h"
#include "Druid.h"
#include "Monk.h"
#include "Paladin.h"
#include <memory>
using namespace std;

namespace BridgePattern
{
	void BridgeTest()
	{
		unique_ptr<Role> playerRole;
		shared_ptr<PlayerClass> playerClass;

		//Damage Dealers
		playerClass.reset(new Monk());
		playerRole.reset(new DamageDealer(playerClass));
		playerRole->doYourDuty();
		
		playerClass.reset(new Druid());
		playerRole.reset(new DamageDealer(playerClass));
		playerRole->doYourDuty();

		playerClass.reset(new Paladin());
		playerRole.reset(new DamageDealer(playerClass));
		playerRole->doYourDuty();


		//Healers
		playerClass.reset(new Monk());
		playerRole.reset(new Healer(playerClass));
		playerRole->doYourDuty();

		playerClass.reset(new Druid());
		playerRole.reset(new Healer(playerClass));
		playerRole->doYourDuty();

		playerClass.reset(new Paladin());
		playerRole.reset(new Healer(playerClass));
		playerRole->doYourDuty();

		//Tanks
		playerClass.reset(new Monk());
		playerRole.reset(new Tank(playerClass));
		playerRole->doYourDuty();

		playerClass.reset(new Druid());
		playerRole.reset(new Tank(playerClass));
		playerRole->doYourDuty();

		playerClass.reset(new Paladin());
		playerRole.reset(new Tank(playerClass));
		playerRole->doYourDuty();
	}
}