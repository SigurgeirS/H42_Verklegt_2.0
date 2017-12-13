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

int main(){
	LinkerDomain dom;
	vector<Linker> links;
	Linker link;
	cin>>link;

	dom.addLinker(link);
	links = dom.getLinker();

	cout<<links[0]<<endl;
	return 0;
}
