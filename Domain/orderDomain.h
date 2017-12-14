#ifndef ORDERDOMAIN_H
#define ORDERDOMAIN_H

#include"../Model/order.h"
#include"../Model/Sides.h"
#include"../Repo/OrderRepository.h"
#include"../Repo/LinkerRepository.h"
#include"../Model/Linker.h"
#include <iostream>

class orderDomain{
	private:
		OrderRepository orderRepo;
		LinkerRepository LinkRepo;

	public:
		orderDomain();
		void addOrder(const order& newOrder);
		void getOrderList(const vector<order>& orderlist);
		void sidesLinker(Linker& link, const order& ord, const Sides& side);


};

#endif
