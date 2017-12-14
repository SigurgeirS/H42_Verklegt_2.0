#include "BaseDomain.h"

BaseDomain::BaseDomain(){
	//constructor
}

void BaseDomain::addBase(Base& base){
	base.verbose = false;
	repo.fileBase(base);
}

vector<Base> BaseDomain::getBase(){
	int c = 0;
	vector<Base> bases;
	bases = repo.fetchBases();
	while(c < bases.size()){
		bases[c].verbose = true;
		c++;
	}
	return bases;
}
