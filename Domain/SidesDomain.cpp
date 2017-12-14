#include "SidesDomain.h"

SidesDomain::SidesDomain(){
}

void SidesDomain::addSides(Sides& side){
	side.verbose = false;
	repo.storeSides(side);
}

vector<Sides> SidesDomain::getSides(){
	int c = 0;
	vector<Sides> sidelist;
	sidelist = repo.fetchSides();
	while(c < sidelist.size()){
		sidelist[c].verbose = true;
		c++;
	}
	return sidelist;
}


