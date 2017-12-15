//
//  BakerUI.hpp
//  NEW NEW verklegt
//
//  Created by Halldór Alvar Kjartansson on 14/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef BakerUI_hpp
#define BakerUI_hpp

#include <stdio.h>
#include <iostream>
#include "../Domain/orderDomain.h"
using namespace std;
class BakerUI{
public:
    BakerUI();
    void pickLocation();
    void uniquePizzaORPizzaList();
    void ChangeStatus();
private:
    OrderDomain orderDom;
    OrderDomain orders;
};

#endif /* BakerUI_hpp */
