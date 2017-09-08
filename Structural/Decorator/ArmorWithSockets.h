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
#include "ArmorDecorator.h"
#include <iostream>
using namespace std;

namespace DecoratorPattern
{
	class ArmorWithSockets : public ArmorDecorator
	{
	private:
		bool m_fHasBlueSocket;
		bool m_fHasRedSocket;
		bool m_fHasGreenSocket;
		bool m_fHasYellowSocket;
		bool m_fHasPrismaticSocket;
	public:
		ArmorWithSockets(
			shared_ptr<Armor> decoratedArmor,
			bool fHasBlueSocket = false, 
			bool fHasRedSocket = false, 
			bool fHasGreenSocket = false, 
			bool fYellowSocket = false, 
			bool fMetaSocket = false) :
			ArmorDecorator(decoratedArmor),
			m_fHasBlueSocket(fHasBlueSocket),
			m_fHasRedSocket(fHasRedSocket),
			m_fHasGreenSocket(fHasGreenSocket),
			m_fHasYellowSocket(fYellowSocket),
			m_fHasPrismaticSocket(fMetaSocket)
		{}
	public:
		virtual void PrintDecoratedProperties()
		{
			ArmorDecorator::PrintDecoratedProperties();
			cout << "ArmorWithSockets PrintDecoratedProperties" << endl;
			cout << (m_fHasBlueSocket ? "Has blue socket" : "Doesn't have blue socket") << endl;
			cout << (m_fHasRedSocket ? "Has red socket" : "Doesn't have red socket") << endl;
			cout << (m_fHasGreenSocket ? "Has green socket" : "Doesn't have green socket") << endl;
			cout << (m_fHasYellowSocket ? "Has yellow socket" : "Doesn't have yellow socket") << endl;
			cout << (m_fHasPrismaticSocket ? "Has prismatic socket" : "Doesn't have prismatic socket") << endl;
		}
	};
}