#ifndef BASE_H
#define BASE_H
#include<iostream>
#include<string>

using namespace std;
class Base
{
    public:
        Base();
        friend ostream& operator << (ostream& out, const Base& base);
        friend istream& operator >>(istream& in, Base& base);
        int get_id();
        string get_name();
	bool verbose;

    protected:

    private:
        int ID;
        double price;
        string name;
};

#endif // BASE_H

