#include "Pizza_menu.h"
using namespace std;

Pizza_menu::Pizza_menu()
{
    this->ID = 0;
    this->name = "";
    this->verbose = true;
}

int Pizza_menu::get_id() const
{
    return ID;
}

string Pizza_menu::get_name(){
       return name;
}

istream& operator >> (istream& in, Pizza_menu& pizza_menu)
{
	if(pizza_menu.verbose){
    		cout << "Type in a ID: " << endl;
	}
    	in >> pizza_menu.ID;
    	if(pizza_menu.verbose){
    		cout << "Type in a name: " << endl;
    	}
    	in >> pizza_menu.name;
    	return in;
}

ostream& operator << (ostream& out, const Pizza_menu& pizza_menu)
{
    if(pizza_menu.verbose){
	    out<<"ID: "<<pizza_menu.ID<<endl<<"Name: "<<pizza_menu.name<<endl;
    }
    if(pizza_menu.verbose == false){
	    out<<pizza_menu.ID<<endl<<pizza_menu.name<<endl;
    }
    return out;
}
