#include "orderDomain.h"

OrderDomain::OrderDomain(){
	//constructor
}

void OrderDomain::addOrder(const Order& newOrder){
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
		Linker link;
		link.setIDa(ord.getID());
		link.setIDb(side.getID());
		LinkRepo.storeLinker(link, "order_sides.txt");
}

void OrderDomain::sodaLinker(const Order& ord, const Soda& soda){
	Linker link;
	link.setIDa(ord.getID());
	link.setIDb(soda.getID());
	LinkRepo.storeLinker(link, "order_soda.txt");
}

void OrderDomain::locationLinker(const Order& ord, const Location& location){
	Linker link;
	link.setIDa(ord.getID());
	link.setIDb(location.getID());
	LinkRepo.storeLinker(link, "order_location.txt");
}

void OrderDomain::inputSodaLinker(int input, const Order& order){
	Linker link;
	cout<<"GERIST THETTA?!"<<endl;
	vector<Soda> sodas;
	sodas = SodaDom.getSoda();

	int c = 0;
	int test;
	cout<<sodas.size()<<endl;
	while(c < sodas.size()){
		test = sodas[c].getID();
		cout<<test<<endl;
		cout<<"GERIST THETTA?!"<<endl;
		if(test == input){
			sodaLinker(order, sodas[c]);
			cout<<sodas[c]<<endl;
		}
		c++;
	}
}
