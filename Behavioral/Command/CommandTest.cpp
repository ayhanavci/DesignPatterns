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
 
#include "CommandTest.h"
#include "MarkOfTheClawCommand.h"
#include "WordOfAgilityCommand.h"
#include "GoblinGliderCommand.h"
#include "RocketsCommand.h"
#include "RedSocketCommand.h"
#include "PrismaticSocketCommand.h"

#include "ProfessionControl.h"
#include "Armor.h"
#include <iostream>
using namespace std;
namespace CommandPattern
{
	//The Client
	void CommandTest()
	{
		//Targets of enchants 
		shared_ptr<Armor> fancyHelm(new Armor());
		shared_ptr<Armor> fancyChest(new Armor());
		shared_ptr<Armor> fancyGloves(new Armor());

		//Invoker
		unique_ptr<ProfessionControl> control(new ProfessionControl());

		//Receivers
		shared_ptr<Enchanting> enchanting(new Enchanting(760));
		shared_ptr<Jewelcrafting> jewelcrafting(new Jewelcrafting(700));
		shared_ptr<Engineering> engineering(new Engineering(800));

		//Concrete Commands
		shared_ptr<WordOfAgilityCommand> c_woa(new WordOfAgilityCommand(enchanting));
		shared_ptr<MarkOfTheClawCommand> c_motc(new MarkOfTheClawCommand(enchanting));
		shared_ptr<GoblinGliderCommand> c_gg(new GoblinGliderCommand(engineering));
		shared_ptr<RocketsCommand> c_rocket(new RocketsCommand(engineering));
		shared_ptr<RedSocketCommand> c_red(new RedSocketCommand(jewelcrafting));
		shared_ptr<PrismaticSocketCommand> c_prism(new PrismaticSocketCommand(jewelcrafting));

		//execute 1
		control->setCommand(c_woa);
		control->doTheThing(fancyHelm);
		control->doTheThing(fancyChest);
		control->doTheThing(fancyGloves);

		cout << "Helm enchant is " << fancyHelm->getModification() << endl;
		cout << "Chest enchant is " << fancyChest->getModification() << endl;
		cout << "Gloves enchant is " << fancyGloves->getModification() << endl;

		//execute 2
		control->setCommand(c_motc);
		control->doTheThing(fancyHelm);
		control->doTheThing(fancyChest);
		control->doTheThing(fancyGloves);

		cout << "Helm enchant is " << fancyHelm->getModification() << endl;
		cout << "Chest enchant is " << fancyChest->getModification() << endl;
		cout << "Gloves enchant is " << fancyGloves->getModification() << endl;

		//execute 3
		control->setCommand(c_gg);
		control->doTheThing(fancyHelm);
		control->doTheThing(fancyChest);
		control->doTheThing(fancyGloves);

		cout << "Helm enchant is " << fancyHelm->getModification() << endl;
		cout << "Chest enchant is " << fancyChest->getModification() << endl;
		cout << "Gloves enchant is " << fancyGloves->getModification() << endl;

		//execute 4
		control->setCommand(c_rocket);
		control->doTheThing(fancyHelm);

		control->setCommand(c_red);
		control->doTheThing(fancyChest);

		control->setCommand(c_prism);
		control->doTheThing(fancyGloves);

		cout << "Helm enchant is " << fancyHelm->getModification() << endl;
		cout << "Chest enchant is " << fancyChest->getModification() << endl;
		cout << "Gloves enchant is " << fancyGloves->getModification() << endl;

	}
}