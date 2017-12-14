#include "LinkerRepository.h"

LinkerRepository::LinkerRepository(){
	//constructor
}

void LinkerRepository::storeLinker(const Linker& link, string fileName){
	ofstream fout;
	fout.open(fileName.c_str(), ios::app);

	if (fout.is_open()){
		fout << link;
		fout.close();

	}else{
		//throw error
	}
}

vector<Linker> LinkerRepository::fetchLinker(string fileName) {
	ifstream fin;
	vector<Linker> links;

	fin.open(fileName.c_str());
	if(fin.is_open()){
		Linker link;
		while(fin.good()){
			fin>>link;
			links.push_back(link);
		}
		fin.close();
		links.pop_back();
	}else{
		cout<<"could not open file"<<endl;
	}
	return links;
}

