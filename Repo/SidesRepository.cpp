#include "SidesRepository.h"

SidesRepository::SidesRepository(){
}

void SidesRepository::storeSides(const Sides& side){
	ofstream fout;
	fout.open("sideslist.txt", ios::app);
	if(fout.is_open()){
		fout<<side;
		fout.close();
	}else{
		//throw exception
	}
}

vector<Sides> SidesRepository::fetchSides(){

	vector<Sides> sidelist;
	ifstream fin;

	fin.open("sideslist.txt");

	if(fin.is_open()){
		Sides side;
		side.verbose = false;
		while(fin.good()){
			fin>>side;
			sidelist.push_back(side);
		}
		sidelist.pop_back();
	}else{
		//throw exception
	}
	return sidelist;
}

