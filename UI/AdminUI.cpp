//
//  AdminUI.cpp
//  NEW NEW verklegt
//
//  Created by Halldór Alvar Kjartansson on 14/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "AdminUI.h"
void AdminUI::mainUI(){
    char input = '\0';
    while(input != 'q'){
    cout << "Press (1): To add different base sizes " << endl;
    cout << "Press (2): To add new toppings" << endl;
    cout << "Press (3): To add new menu item" << endl;
    cout << "Press (4): To add soda" << endl;
    cout << "Press (5): To add sides" << endl;
    cout << "Press (6): To add locations" << endl;
    cout << "Press (q): To quit to main menu" << endl;
    cin >> input;
    validateInput(input);
    }
}

void AdminUI::validateInput(char input){
    if(input == '1'){
        // add new base
        cin >> base;
        basedom.addBase(base);
    }
    else if(input == '2'){
        //add new topping
        cin >> topping;
        toppingdom.addTopping(topping);
    }
    else if(input == '3'){
        // add new menu item
        cin >>  menu;
        menudom.addMenu(menu);
    }
    else if(input == '4'){
        //add new soda
        cin >> soda;
        sodadom.addSoda(soda);
    }
    else if(input == '5'){
        //add new sides
        cin >> sides;
        sidesdom.addSides(sides);
    }
    else if(input == '6'){
        // add new location
        cin >> location;
        locationdom.addLocation(location);
    }
    
}
