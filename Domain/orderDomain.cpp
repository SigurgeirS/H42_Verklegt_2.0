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

int main(){
	OrderDomain dom;
	Sides side;
	Order order;

	cin>>order;
	cin>>side;

	dom.sidesLinker(order, side);
	return 0;
}
