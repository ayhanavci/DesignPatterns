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
 
#include "RaidLeader.h"
#include "Player.h"
#include "Tank.h"
#include "Healer.h"

namespace MediatorPattern 
{
    RaidLeader::RaidLeader()
    {
        
    }
    RaidLeader::~RaidLeader()
    {

    }
    void RaidLeader::AddPlayer(shared_ptr<Player> newPlayer)
    {
        m_Players.push_back(newPlayer);
    }
    void RaidLeader::OnPlayerGotAggro(string strName)
    {
        for (auto curPlayer : m_Players)
        {
            shared_ptr<Tank> meatShield = dynamic_pointer_cast<Tank> (curPlayer);
            if (meatShield != nullptr)
            {
                meatShield->Taunt(m_Boss);
                break;
            }
        }
    }
    void RaidLeader::OnPlayerisLowHP(string strName)
    {
        shared_ptr<Healer> niceguy = nullptr;

        for (auto curPlayer : m_Players)
        {
            niceguy = dynamic_pointer_cast<Healer> (curPlayer);
            if (niceguy != nullptr)
            {
                niceguy->Heal(strName);                
                break;
            }
        }
        if (niceguy != nullptr)
        {
            for (auto curPlayer : m_Players)
            {            
                if (curPlayer->getName() == strName)
                {
                    curPlayer->OnHealed(niceguy->getName());
                    break;
                }
            }
        }
        
    }
    void RaidLeader::OnPlayerisDead(string strName)
    {        
        shared_ptr<Player> niceguy = nullptr;
        for (auto curPlayer : m_Players)
        {            
            if (curPlayer->getCombatRes() && !curPlayer->isCombatResOnCD())
            {                
                curPlayer->ResurrectPlayer(strName);
                niceguy = curPlayer;                
                break;
            }
        }
        if (niceguy != nullptr)
        {
            for (auto curPlayer : m_Players)
            {            
                if (curPlayer->getName() == strName)
                {
                    curPlayer->OnResurrected(niceguy->getName());
                    break;
                }
            }
        }
    }  
    void RaidLeader::OnBossisLowHP()
    {        
        bool fSuccess = false;
        for (auto curPlayer : m_Players)
        {            
            if (curPlayer->canBloodlust())
            {                
                curPlayer->Bloodlust();
                fSuccess = true;
                break;
            }
        }   
        for (auto curPlayer : m_Players)
        {            
            curPlayer->activateBloodLust();
        }  
    }
    void RaidLeader::OnBossisDead()
    {                
        for (auto curPlayer : m_Players)
        {            
            curPlayer->Cheer();
        }          
    }
}

