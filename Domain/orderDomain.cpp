#include "orderDomain.h"

OrderDomain::OrderDomain(){
	//constructor
}

void OrderDomain::addOrder(const Order& newOrder){
    //adds new order
	OrderRepo.add(newOrder);
};

void OrderDomain::getOrderList(const vector<Order>& Orderlist){
	//prints out all Orders.
	cout<<"--------------------"<<endl;
	int c = 0;
	Order ord;
	while( c < Orderlist.size() ){
		cout<<"--------------------"<<endl;
		cout<<Orderlist[c];
		cout<<"--------------------"<<endl;
		c++;
	}
	cout<<"--------------------"<<endl;
}

void OrderDomain::sidesLinker(const Order& ord, const Sides& side){
    // this function links side ID and order together
		Linker link;
		link.setIDa(ord.getID());
		link.setIDb(side.getID());
		LinkRepo.storeLinker(link, "order_sides.txt");
}

void OrderDomain::sodaLinker(const Order& ord, const Soda& soda){
    //this function adds soda ID to the order
	Linker link;
	link.setIDa(ord.getID());
	link.setIDb(soda.getID());
	LinkRepo.storeLinker(link, "order_soda.txt");
}

void OrderDomain::locationLinker(const Order& ord, const Location& location){
    //this links the location and order together
	Linker link;
	link.setIDa(ord.getID());
	link.setIDb(location.getID());
	LinkRepo.storeLinker(link, "order_location.txt");
}

void OrderDomain::inputSodaLinker(int input, const Order& order){
    //gets specific id for soda and adds to the order
	vector<Soda> sodas;
	sodas = SodaDom.getSoda();

	int c = 0;
	int test;
	while(c < sodas.size()){
		test = sodas[c].getID();
		if(test == input){
			sodaLinker(order, sodas[c]);
		}
		c++;
	}
}

void OrderDomain::inputSidesLinker(int input, const Order& order){
    //gets specific id for sides and adds to the order
	vector<Sides> sidelist;
	sidelist = SidesDom.getSides();

	int c = 0;
	int test;
	while(c < sidelist.size()){
		test = sidelist[c].getID();
		if(test == input){
			sidesLinker(order, sidelist[c]);
		}
		c++;
	}
}

void OrderDomain::inputLocationLinker(int input, const Order& order){
    //gets a specific id for location and links it to the order
	vector<Location> locations;
	locations = LocationDom.getLocation();

	int c = 0;
	int test;
	while(c < locations.size()){
		test = locations[c].getID();
		if(test == input){
			locationLinker(order, locations[c]);
		}
		c++;
	}
}

