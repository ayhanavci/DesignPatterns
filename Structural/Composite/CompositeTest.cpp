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
 
#include "CompositeTest.h"
#include "Party.h"
#include "MiniRaid.h"
#include "VanillaRaid.h"

namespace CompositePattern
{
	void CompositeTest()
	{
		//Init 5m parties
		shared_ptr<Party> party1(new Party());
		shared_ptr<Party> party2(new Party());
		shared_ptr<Party> party3(new Party());
		shared_ptr<Party> party4(new Party());
		shared_ptr<Party> party5(new Party());
		shared_ptr<Party> party6(new Party());
		shared_ptr<Party> party7(new Party());
		shared_ptr<Party> party8(new Party());

		//Init 10m raids
		shared_ptr<MiniRaid> raid1(new MiniRaid());
		shared_ptr<MiniRaid> raid2(new MiniRaid());
		shared_ptr<MiniRaid> raid3(new MiniRaid());
		shared_ptr<MiniRaid> raid4(new MiniRaid());

		//Init 40m raid
		unique_ptr<VanillaRaid> bigRaid(new VanillaRaid());


		//Gather mini raid players
		raid1->add(party1);
		raid1->add(party2);

		raid2->add(party3);
		raid2->add(party4);

		raid3->add(party5);
		raid3->add(party6);

		raid4->add(party7);
		raid4->add(party8);

		//Gather oldie raid
		bigRaid->add(raid1);
		bigRaid->add(raid2);
		bigRaid->add(raid3);
		bigRaid->add(raid4);

		//Engage!
		bigRaid->EngageInFight();

	}
}