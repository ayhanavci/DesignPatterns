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

#include <iostream>
#include <memory>
using namespace std;

#include "Boss.h"

namespace MediatorPattern
{    
    class RaidLeader;
    class Player
    {
    private:
        shared_ptr<RaidLeader> m_leader;
        string m_strName;        
        bool m_fCanCombatRes;
        bool m_fCombatResOnCD;
        bool m_fCanBloodlust;
    protected:
        bool m_fBloodlustActive;    
    public:
        Player(string strName, shared_ptr<RaidLeader> leader) : 
            m_strName(strName), m_leader(leader), m_fBloodlustActive(false)  { m_fCombatResOnCD = false;}
        
        string getName() { return m_strName; }      
        
        bool canBloodlust() { return m_fCanBloodlust; }           
        bool isBloodlustActive() { return m_fBloodlustActive; }
        void activateBloodLust() { m_fBloodlustActive = true; }    
        
        bool getCombatRes() { return m_fCanCombatRes; }    
        void setCombatRes(bool fCR = true) {  m_fCanCombatRes = fCR; }            
        bool isCombatResOnCD() {  return m_fCombatResOnCD; }                
        virtual void Cheer();
        virtual void DealDamage(shared_ptr<Boss> bossToDps) = 0;
        virtual void OnHealed(string strPlayerToThank);
        virtual void OnLowHP();
        virtual void OnGotAggro();
        virtual void OnDead();
        virtual void OnResurrected(string strPlayerToThank);
        virtual void ResurrectPlayer(string strPlayerName);
        virtual void Bloodlust(); 
        
    };
}