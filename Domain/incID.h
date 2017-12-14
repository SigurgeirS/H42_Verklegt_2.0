
#ifndef INCID_H
#define INCID_H

#include<sstream>
#include<fstream>

#include"../Model/order.h"

class IncID{
	private:

	public:
		IncID();
		//sets id records to zero
		void resetOrderID();
		//Sets ID to latest ID + one
		void orderID(Order& newOrder);
};

#endif
