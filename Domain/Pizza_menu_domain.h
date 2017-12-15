
#ifndef PIZZAMENUDOMAIN_H 
#define PIZZAMENUDOMAIN_H
#include "../Repo/Pizza_menu_repository.h"
#include"../Repo/LinkerRepository.h"
#include"../Model/Topping.h"
#include"../Model/Pizza.h"
#include"../Domain/ToppingDomain.h"

class Pizza_menu_domain {
	private:
		Pizza_menu_repository repo;
		LinkerRepository LinkRepo;
		ToppingDomain ToppingDom;
	public:
		Pizza_menu_domain();
		void addMenu(Pizza_menu& menu);
		vector<Pizza_menu> getMenu();
		void toppingLinker(const Pizza_menu, const Topping topping);
		void inputTopperLinker(int input, const Pizza_menu& menu);
};

#endif
