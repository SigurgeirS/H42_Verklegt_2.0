//
//  BakerUI.cpp
//  NEW NEW verklegt
//
//  Created by Halldór Alvar Kjartansson on 14/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "BakerUI.hpp"
BakerUI::BakerUI(){}
void BakerUI::pickLocation(){
    cout << "Pick your location" << endl;
    //Set location func
    cout << "Valid location" << endl;
    uniquePizzaORPizzaList();
    
}
void BakerUI::uniquePizzaORPizzaList(){
    cout << "Press (a): To get list of ordered pizzas"<<endl;
    cout <<"Press (b): To get next Pizza in queue" << endl;
    char input;
    cin >> input;
    if(input == 'a'){
        cout << " you pressed a " << endl;
        //get list of ordered pizza
        ChangeStatus();
    }
    else if (input == 'b'){
        cout << " you pressed b " << endl;
        //get next pizza in queue
        ChangeStatus();
    }
}
void BakerUI::ChangeStatus(){
    cout << "Press (a): To set order status to 'in progress'" << endl;
    cout << "Press (b): To set order status to 'Ready'" << endl;
    char input;
    cin >> input;
    if(input == 'a'){
        cout << " you pressed a " << endl;
        //set order to 'in progress'
    }
    else if (input == 'b'){
        cout << " you pressed b " << endl;
        //Set order to 'Ready'
    }
}
