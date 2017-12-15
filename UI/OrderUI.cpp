#include "OrderUI.h"

OrderUI::OrderUI()
{
    //ctor
}

OrderUI::~OrderUI()
{
    //dtor
}

void OrderUI::startUI()
{
    cout << "Press (a): To order pizza" << endl;
    cout << "Press (b): To order sides" << endl;
    cout << "Press (c): To order soda" << endl;
    char input = '\0';
    cin >> input;
    validateStart_input(input);
}

void OrderUI::OrderPizza(){
    cout << "Press (a): To order from menu" << endl;
    cout << "Press (b): To make your own" << endl;
}

void OrderUI::OrderSides(){
    cout << "What kind of side would you want ?" << endl;
    
}

void OrderUI::OrderSoda(){
    cout << "What kind of soda would you want ?" << endl;
    
}
void OrderUI::validateStart_input(char input){
    if(input == 'a'){
        
    }
    else if (input == 'b'){
        
    }
    else if (input == 'c'){
        
    }
}

