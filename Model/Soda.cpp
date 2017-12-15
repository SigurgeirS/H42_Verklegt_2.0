#include "soda.h"

Soda::Soda(){
	verbose = true;
}

int Soda::getID() const{
	return ID;
}

string Soda::getName(){
	return name;
}

double Soda::getPrice(){
	return price;
}

ostream& operator << (ostream& out, const Soda& soda){
	if(soda.verbose){
		out<<"ID: "<<soda.ID<<endl<<"Name: "<<soda.name<<endl<<"Price: "<<soda.price<<endl;
	}
	if(soda.verbose == false){
		out<<soda.ID<<endl<<soda.name<<endl<<soda.price<<endl;
	}
	return out;
}

istream& operator >> (istream& in, Soda& soda){
	if(soda.verbose){
		cout<<"ID: ";
	}
	in>>soda.ID;
	if(soda.verbose){
		cout<<"Name: ";
	}
	in>>soda.name;
	if(soda.verbose){
		cout<<"Price: ";
	}
	in>>soda.price;
	return in;
}


