#include "Sides.h"

Sides::Sides(){
	verbose = true;
}

int Sides::getID() const{
	return ID;
}

string Sides::getName(){
	return name;
}

double Sides::getPrice(){
	return price;
}

ostream& operator << (ostream& out, const Sides& side){
	if(side.verbose == false){
		out<<side.ID<<endl<<side.name<<endl<<side.price<<endl;
	}
	if(side.verbose){
		out<<"ID: "<<side.ID<<endl<<"Name: "<<side.name<<endl<<"Price: "<<side.price<<endl;
	}
	return out;
}

istream& operator >> (istream& in, Sides& side){
	if(side.verbose){
		cout<<"ID: ";
	}
	in>>side.ID;
	if(side.verbose){
		cout<<"Name: ";
	}
	in>>side.name;
	if(side.verbose){
		cout<<"Price: ";
	}
	in>>side.price;

	return in;
}

