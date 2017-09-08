#pragma once
#include "Shaman.h"
#include "Healer.h"

#include <memory>
using namespace std;
namespace ProxyPattern
{
	class ShamanPvpProxy : public Healer
	{
		unique_ptr<Shaman> m_RealShaman;
	public:
		ShamanPvpProxy()
		{
			m_RealShaman.reset(new Shaman());
		}
	private:
		void StopCasting()
		{
			cout << "Stop Casting!" << endl;
		}
		void ShowToolTip()
		{
			cout << "Show Tooltip" << endl;
		}
	public:
		virtual void Heal()
		{
			ShowToolTip();
			StopCasting();
			m_RealShaman->Heal();
		}
	};
}