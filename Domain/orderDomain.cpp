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

double OrderDomain::TotalSodaPrice(Order& order){
	double Total;
	vector<Linker> links;
	links = LinkRepo.fetchLinker("order_soda.txt");

	int c = 0;
	vector<int>IDs;

	while(c < links.size()){
		if(links[c].getIDa() == order.getID()){
			IDs.push_back(links[c].getIDb());
		}
		c++;
	}
	SodaRepository SodaRep;
	vector<Soda> sodas = SodaRep.fetchSoda();

	c = 0;

	while(c < sodas.size()){
		for(int i = 0; i < IDs.size(); i++){
			if(sodas[c].getID() == IDs[i]){
				Total += sodas[c].getPrice();
			}
		}
		c++;
	}
	return Total;
}
/*
double OrderDomain::TotalPizzaPrice(Order& order){
	double Total;
	vector<Linker> links;
	links = LinkRepo.fetchLinker("order_pizza.txt");

	int c = 0;
	vector<int>IDs;

	while(c < links.size()){
		if(links[c].getIDa() == order.getID()){
			IDs.push_back(links[c].getIDb());
		}
		c++;
	}
	PizzaRepository PizzaRep;
	vector<Pizza> pizzas = PizzaRep.fetchPizza();

	c = 0;

	while(c < pizzas.size()){
		for(int i = 0; i < IDs.size(); i++){
			if(pizzas[c].getID() == IDs[i]){
				Total += pizzas[c].getPrice();
			}
		}
		c++;
	}
	return Total;
}
*/
double OrderDomain::TotalSidesPrice(Order& order){
	double Total;
	vector<Linker> links;
	links = LinkRepo.fetchLinker("order_sides.txt");

	int c = 0;
	vector<int>IDs;

	while(c < links.size()){
		if(links[c].getIDa() == order.getID()){
			IDs.push_back(links[c].getIDb());
		}
		c++;
	}
	SidesRepository SidesRep;
	vector<Sides> sidelist = SidesRep.fetchSides();

	c = 0;

	while(c < sidelist.size()){
		for(int i = 0; i < IDs.size(); i++){
			if(sidelist[c].getID() == IDs[i]){
				Total += sidelist[c].getPrice();
			}
		}
		c++;
	}
	return Total;
}

void OrderDomain::SetPrice(Order& order){
}
