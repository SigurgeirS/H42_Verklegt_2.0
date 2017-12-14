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

void OrderDomain::sidesLinker(Linker& link, const Order& ord, const Sides& side){
	

