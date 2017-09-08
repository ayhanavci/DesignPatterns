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
 
#include "MementoTest.h"
#include "PlayerArmor.h"
#include "TransmogMaster.h"

namespace MementoPattern
{
   

    void MementoTest()
    {
        
        TransmogMaster transmogrifier;
        PlayerArmor shinyPaladin;
    
        shinyPaladin.setHelm("Judgment Crown");
        shinyPaladin.setShoulders("Judgment Spaulders");
        shinyPaladin.setChest("Judgment Breastplate");
        shinyPaladin.setGloves("Judgment Gauntlets");
        shinyPaladin.setPants("Judgment Legplates");
        transmogrifier.addLooks("Tier 2", shinyPaladin.saveState());
    
        shinyPaladin.setHelm("Helmet of the Highlord");
        shinyPaladin.setShoulders("Pauldrons of the Highlord");
        shinyPaladin.setChest("Breastplate of the Highlord");
        shinyPaladin.setGloves("Gauntlets of the Highlord");
        shinyPaladin.setPants("Legplates of the Highlord");
        transmogrifier.addLooks("Tier 19", shinyPaladin.saveState());
    
        shinyPaladin.setHelm("Field Marshal's Lamellar Faceguard");
        shinyPaladin.setShoulders("Field Marshal's Lamellar Pauldrons");
        shinyPaladin.setChest("Field Marshal's Lamellar Chestplate");
        shinyPaladin.setGloves("Marshal's Lamellar Gloves");
        shinyPaladin.setPants("Marshal's Lamellar Legplates");
        transmogrifier.addLooks("Vanilla Rank Set", shinyPaladin.saveState());    
            
        shinyPaladin.FlexArmor();
        shinyPaladin.restoreState(transmogrifier.getLooks("Tier 2"));
        shinyPaladin.FlexArmor();
        shinyPaladin.restoreState(transmogrifier.getLooks("Tier 19"));
        shinyPaladin.FlexArmor();
        
    }   
}