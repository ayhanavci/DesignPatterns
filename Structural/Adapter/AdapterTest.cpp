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
 
#include "AdapterTest.h"
#include "Priest.h"
#include "Rogue.h"
#include "Hunter.h"
#include "HealerRotation.h"
#include "HealerAdapter.h"
#include <memory>
using namespace std;

namespace AdapterPattern
{
	void AdapterTest()
	{
		shared_ptr<Priest> pPriest(new Priest());
		shared_ptr<Rogue> pRogue(new Rogue());
		shared_ptr<Hunter> pHunter(new Hunter());

		shared_ptr<HealerAdapter> pAdapterRogue(new HealerAdapter(pRogue));
		shared_ptr<HealerAdapter> pAdapterHunter(new HealerAdapter(pHunter));

		HealerRotation::PerformRotation(pPriest);
		HealerRotation::PerformRotation(pAdapterRogue);
		HealerRotation::PerformRotation(pAdapterHunter);

	}
}