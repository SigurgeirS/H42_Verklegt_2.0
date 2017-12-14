#ifndef ORDERDOMAIN_H
#define ORDERDOMAIN_H

#include"../Model/order.h"
#include"../Model/Sides.h"
#include"../Repo/OrderRepository.h"
#include"../Repo/LinkerRepository.h"
#include"../Model/Linker.h"
#include <iostream>

class OrderDomain{
	private:
		OrderRepository orderRepo;
		LinkerRepository LinkRepo;

	public:
		OrderDomain();
		void addOrder(const Order& newOrder);
		void getOrderList(const vector<Order>& orderlist);
		void sidesLinker(Linker& link, const order& ord, const Sides& side);


};

#endif
