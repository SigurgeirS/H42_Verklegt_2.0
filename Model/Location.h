#ifndef LOCATION_H
#define LOCATION_H
#include<string>
#include <iostream>

using namespace std;
class Location
{
public:
    Location();
    int getID() const;
    string getName();
    friend istream& operator >> (istream& in, Location& location);
    friend ostream& operator << (ostream& out, const Location& location);
    bool verbose;

private:
    int ID;
    string name;
};

#endif // LOCATION_H
