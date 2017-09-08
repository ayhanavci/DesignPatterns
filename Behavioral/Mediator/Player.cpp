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
 
#include "Player.h"
#include "RaidLeader.h"

namespace MediatorPattern
{
    void Player::OnHealed(string strPlayerToThank)
    {
        cout << "Player " << m_strName << " is healed by " << strPlayerToThank << endl;
    }
    void Player::OnLowHP()
    {
        cout << "Player " << m_strName << " is on low HP" << endl;
        m_leader->OnPlayerisLowHP(m_strName);
    }
    void Player::OnGotAggro()
    {
        cout << "Player " << m_strName << " got aggro" << endl;
        m_leader->OnPlayerGotAggro(m_strName);
    }
    void Player::OnDead()
    {
        cout << "Player " << m_strName << " is killed" << endl;
        m_leader->OnPlayerisDead(m_strName);
    }
    void Player::OnResurrected(string strPlayerToThank)
    {
        cout << "Player " << m_strName << " is resurrected by " << strPlayerToThank << endl;
    }
    void Player::ResurrectPlayer(string strPlayerToThank)
    {
        cout << "Player " << m_strName << " resurrects " << strPlayerToThank << endl;
        m_fCombatResOnCD = true;
    }
    void Player::Bloodlust()
    {
        cout << "Player " << m_strName << " casts bloodlust" << endl;        
    }
    void Player::Cheer()
    {
        cout << "Player " << m_strName << " cheers!" << endl;        
    } 
}