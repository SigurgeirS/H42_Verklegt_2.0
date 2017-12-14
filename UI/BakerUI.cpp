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
    
}
void BakerUI::uniquePizzaORPizzaList(){
    cout << "Press (a): To get list of ordered pizzas"<<endl;
    cout <<"Press (b): To get next Pizza in queue" << endl;
}
void BakerUI::ChangeStatus(){
    cout << "Press (a): To set order status to 'in progress'" << endl;
    cout << "Press (b): To set order status to 'Ready'" << endl;
}
