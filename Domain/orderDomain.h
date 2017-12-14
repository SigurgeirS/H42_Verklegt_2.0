#ifndef ORDERDOMAIN_H
#define ORDERDOMAIN_H

#include"../Model/order.h"
#include"../Model/Sides.h"
#include"../Model/Soda.h"
#include"../Model/Location.h"
#include"../Repo/OrderRepository.h"
#include"../Repo/LinkerRepository.h"
#include"../Model/Linker.h"
#include <iostream>

class OrderDomain{
	private:
		OrderRepository OrderRepo;
		LinkerRepository LinkRepo;

	public:
		OrderDomain();
		void addOrder(const Order& newOrder);
		void getOrderList(const vector<Order>& orderlist);
		void sidesLinker(const Order& ord, const Sides& side);
		void sodaLinker(const Order& ord, const Soda& soda);
		void locationLinker(const Order& ord, const Location& location);


};

#endif
