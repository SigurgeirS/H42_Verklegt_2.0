//
//  UI.cpp
//  Verklegt namskeið
//
//  Created by Halldór Alvar Kjartansson on 04/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "DeliveryUI.hpp"

DeliveryUI::DeliveryUI(){}

void DeliveryUI::SelectLocation(){
    cout << "Please select pickup location" << endl;
    //Get location func
    StartUI();
}
void DeliveryUI::StartUI(){
    cout << "Press (1): For order list" << endl;
    cout << "Press (2): For ready orders" << endl;
    cout << "Press (3): To get specific order" << endl;
    cout << "Press (4): To mark order as paid" << endl;
    cout << "Press (5): To mark order as delivered" << endl;
    char input;
    cin >> input;
    validate_input(input);
}

void DeliveryUI::validate_input(char input){
    if(input == '1'){
        cout << " you pressed 1 " << endl;
        //domain.print_pizzalist();
    }
    else if(input== '2'){
        cout << " you pressed 2 " << endl;
       // domain.print_ready_pizza();
    }
    else if(input == '3'){
        cout << " you pressed 3 " << endl;
//        domain.get_specific_order();
    }
    else if(input== '4'){
        cout << " you pressed 4 " << endl;
//        domain.paid();
    }
    else if(input== '5'){
        cout << " you pressed 5 " << endl;
//        domain.delivered();
    }
}



