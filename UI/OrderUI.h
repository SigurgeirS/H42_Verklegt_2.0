#ifndef ORDERUI_H
#define ORDERUI_H
#include <iostream>
using namespace std;

class OrderUI
{
public:
    OrderUI();
    void startUI();
    void OrderPizza();
    void OrderSoda();
    void OrderSides();
    void validateStart_input(char input);

private:
};

#endif // ORDERUI_H
