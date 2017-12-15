#include "BaseDomain.h"

BaseDomain::BaseDomain(){
	//constructor
}

void BaseDomain::addBase(Base& base){
    // this function adds a base
	base.verbose = false;
	repo.fileBase(base);
}

vector<Base> BaseDomain::getBase(){
    // this function gets specific type of base
	int c = 0;
	vector<Base> bases;
	bases = repo.fetchBases();
	while(c < bases.size()){
		bases[c].verbose = true;
		c++;
	}
	return bases;
}
