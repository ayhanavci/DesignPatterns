#pragma once
#include "Healer.h"
#include <iostream>
using namespace std;

namespace ProxyPattern
{
	class Shaman : public Healer
	{
	public:
		virtual void Heal()
		{
			cout << "Healing wave!" << endl;
		}
	};
}