#ifndef LINKER_H
#define LINKER_H
#include <iostream>
using namespace std;


class Linker {
	private:
		int IDa;
		int IDb;
	public:
		Linker();
		void setIDa(int ID);
		void setIDb(int ID);
		friend ostream& operator << (ostream& out, const Linker& link);
		friend istream& operator >> (istream& in, Linker& link);
};

#endif
