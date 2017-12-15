
#include "Pizza_menu_domain.h"

Pizza_menu_domain::Pizza_menu_domain(){
	//Constructor
}

void Pizza_menu_domain::addMenu(Pizza_menu& menu){
    //this function adds a new location
	menu.verbose = false;
	repo.storeMenu(menu);
}

vector<Pizza_menu> Pizza_menu_domain::getMenu(){
    //this function gets the location
	int c = 0;
	vector<Pizza_menu> menulist;
	menulist = repo.fetchMenu();
	while(c < menulist.size()){
		menulist[c].verbose = true;
		c++;
	}
	return menulist;
}

void Pizza_menu_domain::toppingLinker(const Pizza_menu menu, const Topping topping){
	Linker link;
	link.setIDa(menu.get_id());
	link.setIDb(topping.get_id());
	LinkRepo.storeLinker(link, "menu_topping.txt");
}

void Pizza_menu_domain::inputTopperLinker(int input, const Pizza_menu& menu){
	vector<Topping> toppings;
	toppings = ToppingDom.getTopping();

	int c = 0;
	int test;
	while(c < toppings.size()){
		test = toppings[c].get_id();
		if(test == input){
			toppingLinker(menu, toppings[c]);
		}
		c++;
	}
}


