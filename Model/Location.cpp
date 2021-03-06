///This class is the location data
#include "Location.h"
using namespace std;
Location::Location()
{
    this->name = "";
    this->verbose = true;
}

int Location::getID() const
{
    return ID;
}

string Location::getName()
{
    return name;
}

istream& operator >> (istream& in, Location& location)
{
	if(location.verbose){
    		cout << "Type in a location ID: " << endl;
	}
    	in >> location.ID;
    	if(location.verbose){
		cout << "Type in a location name: " << endl;
	}
	in >> location.name;

	return in;
}

ostream& operator << (ostream& out, const Location& location)
{
	if(location.verbose == false){
    		out << location.ID << endl << location.name << endl;
	}
	if(location.verbose){
		out<<"ID: "<<location.ID<<endl<<"Name: "<<location.name<<endl;
	}

    return out;
}

