#include "LinkerRepository.h"

LinkerRepository::LinkerRepository(){
	//constructor
}

void LinkerRepository::setFileName(const string& file){
	fileName = file;
}

void LinkerRepository::storeLinker(const Linker& link){
	ofstream fout;
	fout.open("Linkerlist.txt", ios::app);

	if (fout.is_open()){
		fout << link;
		fout.close();

	}else{
		//throw error
	}
}

vector<Linker> LinkerRepository::fetchLinker() {
	ifstream fin;
	vector<Linker> links;

	fin.open("Linkerlist.txt");
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

