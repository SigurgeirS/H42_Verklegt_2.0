//
//  AdminUI.hpp
//  NEW NEW verklegt
//
//  Created by Halldór Alvar Kjartansson on 14/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef AdminUI_hpp
#define AdminUI_hpp
#include <iostream>
#include <stdio.h>
#include "BaseDomain.h"
#include "ToppingDomain.h"
#include "LocationDomain.h"
#include "SodaDomain.h"
#include "SidesDomain.h"
//#include "Pizza_menuDomain.h"

using namespace std;

class AdminUI{
public:
    AdminUI();
    void mainUI();
    void validateInput(char input);
private:
    Base base;
    BaseDomain basedom;
    Topping topping;
    ToppingDomain toppingdom;
    Location location;
    LocationDomain locationdom;
    Sides sides;
    SidesDomain sidesdom;
    Soda soda;
    SodaDomain sodadom;
//    Pizza_menuDomain menudom;
//    Pizza_menu menu;
    
};

#endif /* AdminUI_hpp */
