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

#include <string>
#include <map>
using namespace std;

namespace InterpreterPattern
{
    class Language 
    {            
        map<string, string> m_vocabulary;
        string m_strName;
    protected:   
        Language(string strName) : m_strName(strName) {}     
        void add(string strWord, string strMeaning)
        {
            m_vocabulary[strWord] = strMeaning;
        }
    public:
        string getName() 
        {
            return m_strName;
        }
        string get(string strWord)
        {
            return m_vocabulary[strWord];
        }
        bool has(string strWord)
        {
            return !m_vocabulary[strWord].empty();
        }
    };
    class Orcish : public Language
    {        
    public:
        Orcish() : Language("Orcish")
        {
            add("Aka'Magosh", "A blessing on you and yours");
            add("Gol'Kosh", "By my axe" );            
            add("Grombolar", "Bowels of the giant");
            add("Grommash", "The Giant's Heart");
            add("Lok'tar!", "Victory!");
            add("Zug-zug", "ok");
            add("On'davo", "Ready to soar");
        }
    };
    class Darnassian : public Language
    {
    public:
        Darnassian() : Language("Darnassian")        
        {
            add("Ande'thoras-ethil", "May your troubles be diminished");
            add("Kaldorei", "Children of the stars" );
            add("Quel'dorei", "Highborne");
            add("Sin'dorei", "Children of the blood");
            add("Ishnu-dal-dieb", "Good fortune to your family");
            add("Anu'dorini talah!", "For the nature's survival!");            
        }
    };
}