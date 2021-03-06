#include "Pizza_size.h"

Pizza_size::Pizza_size()
{
	verbose = true;
}

int Pizza_size::getID(){
	return ID;
}

string Pizza_size::get_size(){
       return size;
}
istream& operator >> (istream& in, Pizza_size& pizza_size){
	if(pizza_size.verbose){
		    cout << "Type in ID: ";
	}
    	in >> pizza_size.ID;
    	if(pizza_size.verbose){
    		cout << "Type a size name: ";
    	}
    		in >> pizza_size.size;
    	if(pizza_size.verbose){
    		cout << "Type in a pizza size price: ";
    	}
    	in >> pizza_size.price;
    	return in;
}

ostream& operator << (ostream& out,const Pizza_size& pizza_size){
	if(pizza_size.verbose == false){
    		out << pizza_size.ID <<endl<< pizza_size.size << endl << pizza_size.price << endl;
	}
	if(pizza_size.verbose){
		out<<"ID: "<<pizza_size.ID<<endl<<"Name: "<<pizza_size.size<<endl<<"Price: "<<pizza_size.price<<endl;
	}
    return out;
}
