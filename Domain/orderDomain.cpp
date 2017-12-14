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

int main(){
	OrderDomain dom;
	Location location;
	Order order;

	cin>>order;
	cin>>location;

	dom.locationLinker(order, location);
	return 0;
}
