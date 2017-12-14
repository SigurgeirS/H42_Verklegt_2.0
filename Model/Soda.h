#ifndef SODA_H
#define SODA_H

#include<string>
#include<iostream>
using namespace std;

class Soda {
	private:
		int ID;
		string name;
		double price;
	public:
		bool verbose;
		Soda();
		int getID() const;
		string getName();
		double getPrice();
		
		friend ostream& operator << (ostream& out, const Soda& soda);
		friend istream& operator >> (istream& in, Soda& soda);
};

#endif
