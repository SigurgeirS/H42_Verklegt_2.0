#include "Pizza_menu.h"
using namespace std;

Pizza_menu::Pizza_menu()
{
    this->ID = 0;
    this->name = "";
}

Pizza_menu::~Pizza_menu()
{
    //dtor
}

int Pizza_menu::get_id()
{
    return ID;
}

string Pizza_menu::get_name(){
       return name;
}

istream& operator >> (istream& in, Pizza_menu& pizza_menu)
{
    cout << "Type in a ID: " << endl;
    in >> pizza_menu.ID;
    cout << "Type in a name: " << endl;
    in >> pizza_menu.name;
    return in;
}

ostream& operator << (ostream& out,const Pizza_menu& pizza_menu)
{
    Pizza pizza;
    out<<pizza_menu<<endl;
    return out;
}
