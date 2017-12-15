#ifndef PIZZAMENUREPOSITORY_H
#define PIZZAMENUREPOSITORY_H

#include<fstream>
#include"../Model/Pizza_menu.h"
#include<vector>



class Pizza_menu_repository {
	private:
	public:
		Pizza_menu_repository();
		void storeMenu(const Pizza_menu& menu);
		vector<Pizza_menu> fetchMenu();
};

#endif
