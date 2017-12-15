#ifndef TOPPING_H
#define TOPPING_H
#include<iostream>
using namespace std;

class Topping
{
public:
    Topping();
    friend ostream& operator << (ostream& out, const Topping& topping);
    friend istream& operator >>(istream& in, Topping& topping);
    int get_id() const;
    string get_name();
    double get_price();
    bool verbose;

private:
    string name;
    double price;
    int ID;

};

#endif // TOPPING_H
