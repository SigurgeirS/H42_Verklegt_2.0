#ifndef ORDERREPOSITORY_H
#define ORDERREPOSITORY_H
#include"../Model/order.h"
#include<fstream>
#include <vector>
using namespace std;
class OrderRepository
{
public:
	OrderRepository();
	void add(const Order& newOrder);
	vector<Order> fetch();
private:
};

#endif // ORDERREPOSITORY_H
