#include "ProxyTest.h"

#include "ShamanPvpProxy.h"

namespace ProxyPattern
{
	void ProxyTest()
	{
		unique_ptr<ShamanPvpProxy> pvpShaman(new ShamanPvpProxy());
		pvpShaman->Heal();
	}
}