#ifndef ORDERDOMAIN_H
#define ORDERDOMAIN_H

#include"../Model/order.h"
#include"../Model/Sides.h"
#include"../Model/Linker.h"
#include"../Model/Soda.h"
#include"../Model/Location.h"
#include"../Repo/OrderRepository.h"
#include"../Repo/LinkerRepository.h"
#include"../Domain/SidesDomain.h"
#include"../Domain/LocationDomain.h"
#include"../Domain/SodaDomain.h"
#include <iostream>

class OrderDomain{
	private:
		OrderRepository OrderRepo;
		LinkerRepository LinkRepo;
		SidesDomain SidesDom;
		LocationDomain LocationDom;
		SodaDomain SodaDom;

	public:
		OrderDomain();
		void addOrder(const Order& newOrder);
		void getOrderList(const vector<Order>& orderlist);
		void sidesLinker(const Order& ord, const Sides& side);
		void sodaLinker(const Order& ord, const Soda& soda);
		void locationLinker(const Order& ord, const Location& location);
		void inputSodaLinker(int input, const Order& order);
		void inputSidesLinker(int input, const Order& order);
		void inputLocationLinker(int input, const Order& order);
		void SetPrice(Order& order);
		double TotalSodaPrice(Order& order);
	//	double TotalPizzaPrice(Order& order);
		double TotalSidesPrice(Order& order);

};

#endif
