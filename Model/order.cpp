#include "order.h"

Order::Order(){
	//constructor

};

int Order::getID(){
	return ID;
};

string Order::getName(){
	return name;
};

string Order::getStatus(){
	return status;
};

double Order::getPrice(){
	return price;
};

void Order::setID(string ID){
	this -> ID = ID;
};


istream& operator >> (istream& in, Order& Order){


	if(Order.verbose){
		cout<<"ID: ";
	}
	in>>Order.ID;	
	in.ignore();
	if(Order.verbose){
		cout<<"Name: ";
	}
	getline(in, Order.name);
	if(Order.verbose){
		cout<<"Delivery method: ";
	}
	in>>Order.delivery;
	if(Order.verbose){
		cout<<"Order Status: ";
	}
	in>>Order.status;
	if(Order.verbose){
		cout<<"Total cost of Order: ";
	}
	in>>Order.price;
	if(Order.verbose){
	}
	return in;
};

ostream& operator << (ostream& out, const Order& Order){
	out<<Order.ID<<endl<<Order.name<<endl<<Order.delivery<<endl<<Order.status<<endl<<Order.price<<endl;
	return out;
};

