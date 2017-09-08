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
 
#include "FlyWeightTest.h"
#include "Orc.h"
#include "Human.h"

#include <memory>
using namespace std;
namespace FlyweightPattern
{
	void FlyweightTest()
	{
		unique_ptr<Orc> Thrall(new Orc("Alterac Mountains"));
		unique_ptr<Orc> GarroshHellscream(new Orc("Draenor"));

		unique_ptr<Human> ArthasMenethil(new Human("Lorderon"));
		unique_ptr<Human> Khadgar(new Human("Kirin Tor"));

		Thrall->DisplayBaseRaceStats();
		GarroshHellscream->DisplayBaseRaceStats();
		ArthasMenethil->DisplayBaseRaceStats();
		Khadgar->DisplayBaseRaceStats();
	}
}