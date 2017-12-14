#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
using namespace std;
class Pizza
{
	private:
		int ID;
		double price;
	public:
		Pizza();
        int getID();
    		friend ostream& operator << (ostream& out, const Pizza& pizza);
    		friend istream& operator >> (istream& in, Pizza& pizza);
		bool verbose;
    
};

#endif // PIZZA_H
