#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <string>

using namespace std;

class Order{
	private:
		int ID;
		string name;
		string delivery;
		string status;
		double price;
		
	public:
		bool verbose;
		Order();
		int getID() const;
		string getName();
		string getDelivery();
		string getStatus();
		double getPrice();
		void setID(int ID);
		
		friend istream& operator >> (istream& in, Order& order);
		friend ostream& operator << (ostream& out, const Order& order);
};


#endif
