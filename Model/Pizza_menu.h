#ifndef PIZZA_MENU_H
#define PIZZA_MENU_H
#include<iostream>
#include "Pizza.h"
using namespace std;

class Pizza_menu
{
public:
    Pizza_menu();
    friend istream& operator >> (istream& in, Pizza_menu& pizza_menu);
    friend ostream& operator << (ostream& out, const Pizza_menu& pizza_menu);
    int get_id() const;
    string get_name();
    bool verbose;

protected:

private:
    int ID;
    string name;
};

#endif // PIZZA_MENU_H
