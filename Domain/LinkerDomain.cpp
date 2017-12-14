#include "LinkerDomain.h"

LinkerDomain::LinkerDomain(){
	//constructor
}

void LinkerDomain::addLinker(const Linker& link){
	repo.storeLinker(link);
}

vector<Linker> LinkerDomain::getLinker(){
	int c = 0;
	vector<Linker> links;
	links = repo.fetchLinker();
	return links;
}

