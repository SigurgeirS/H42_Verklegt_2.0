#include "SodaRepository.h"

SodaRepository::SodaRepository(){
	//constructor
}

void SodaRepository::storeSoda(const Soda& soda){
	ofstream fout;
	fout.open("sodalist.txt", ios::app);

	if (fout.is_open()){
		fout << soda;
		fout.close();

	}else{
		//throw error
	}
}

vector<Soda> SodaRepository::fetchSoda() {
	ifstream fin;
	vector<Soda> sodas;

	fin.open("sodalist.txt");
	if(fin.is_open()){
		Soda soda;
		soda.verbose = false;

		while(fin.good()){
			fin>>soda;
			sodas.push_back(soda);
		}
		fin.close();
		sodas.pop_back();
	}else{
		cout<<"could not open file"<<endl;
	}
	return sodas;
}

