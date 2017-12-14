#include "SodaDomain.h"

SodaDomain::SodaDomain(){
}

void SodaDomain::addSoda(Soda& soda){
	soda.verbose = false;
	repo.storeSoda(soda);
}

vector<Soda> SodaDomain::getSoda(){
	int c = 0;
	vector<Soda> sodas;
	sodas = repo.fetchSoda();
	while(c < sodas.size()){
		sodas[c].verbose = true;
		c++;
	}
	return sodas;
}

