#include"Pizza_menu_repository.h"

Pizza_menu_repository::Pizza_menu_repository(){
	//constructor
}

void Pizza_menu_repository::storeMenu(const Pizza_menu& menu){
	ofstream fout;
	fout.open("menulist.txt", ios::app);
	if(fout.is_open()){
		fout << menu;
		fout.close();
	}else{
		//throw exception
	}
}

vector<Pizza_menu> Pizza_menu_repository::fetchMenu(){
	vector<Pizza_menu> menulist;
	ifstream fin;

	fin.open("menulist.txt");

	if(fin.is_open()){
		Pizza_menu menu;
		menu.verbose = false;
		while(fin.good()){
			fin>>menu;
			menulist.push_back(menu);
		}
		menulist.pop_back();
	}else{
		cout<<"could not open file"<<endl;
	}
	return menulist;
}
