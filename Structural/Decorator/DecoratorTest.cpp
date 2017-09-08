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
 
#include "DecoratorTest.h"
#include "ArmorItem.h"
#include "ArmorWithSlot.h"
#include "ArmorWithAC.h"
#include "ArmorWithSockets.h"
#include "ArmorWithEnchantment.h"
#include <string>
#include <memory>
#include <iostream>
using namespace std;

namespace DecoratorPattern
{
	void DecoratorTest()
	{
		shared_ptr<ArmorItem> fancyPaladinShoulders(new ArmorItem("+3000 Stamina, +2000 Strength", 8000));
		shared_ptr<ArmorWithAC> wACProperty(new ArmorWithAC(fancyPaladinShoulders, "Plate"));
		shared_ptr<ArmorWithSlot> wSlotProperty(new ArmorWithSlot(wACProperty, "Shoulder"));
		shared_ptr<ArmorWithSockets> wSockets(new ArmorWithSockets(wSlotProperty, true, true, false, false, true));
		shared_ptr<ArmorWithEnchantment> wEnchant(new ArmorWithEnchantment(wSockets, "Enchant Shoulder - Boon of the Scavenger"));

		wEnchant->PrintDecoratedProperties();
	}
}