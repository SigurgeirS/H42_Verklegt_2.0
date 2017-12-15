#include "PizzaDomain.h"
/*This class is the pizza itself and takes the linkers and put them to a file*/
const string toppinglinkerfilename = "toppinglinker.txt";
const string sizelinkerfilename = "sizelinker.txt";
const string baselinkerfilename = "baselinker.txt";
const string orderlinkerfilename = "orderlinker.txt";
const string menulinkerfilename = "menu_topping.txt";

void PizzaDomain::Topping_Linker_store(Linker& linker){
      Link_rep.storeLinker(linker,toppinglinkerfilename.c_str());
}

void PizzaDomain::Size_Linker_store(Linker& linker){
     Link_rep.storeLinker(linker,sizelinkerfilename);
}

void PizzaDomain::Base_Linker_store(Linker& linker){
     Link_rep.storeLinker(linker,baselinkerfilename.c_str());
}

void PizzaDomain::FindMenuLinker(Pizza& pizza, int ID){
     vector<Linker> links = Link_rep.fetchLinker(menulinkerfilename.c_str());
     vector<Linker> found_links;
      for(int i = 0; i < links.size(); i++){
	      if(links[i].getIDa() == ID){
              found_links.push_back(links[i]);
         }
     }
     for(int i = 0; i < found_links.size(); i++){
         found_links[i].setIDa(pizza.getID());
	 Link_rep.storeLinker(found_links[i], toppinglinkerfilename.c_str()); 
     }
}

void PizzaDomain::addPizza(Pizza& pizza){
    //this function add pizza to repository
        pizza.verbose = false;
        repo.storePizza(pizza);
}

vector<Pizza> PizzaDomain::getPizza(){
    // this function gets specific pizza
        int c = 0;
        vector<Pizza> pizzas;
        pizzas = repo.fetchPizzas();
        while(c < pizzas.size()){
                pizzas[c].verbose = true;
                c++;
        }
        return pizzas;
}
#include"../Domain/Pizza_menu_domain.h"
#include"../Repo/Pizza_menu_repository.h"

int main(){
	/*Pizza_menu menu;
	Pizza_menu_domain menuDom;

	cin>>menu;
	menuDom.addMenu(menu);
	*/
	Pizza pizza;
	cin>>pizza;

	PizzaDomain pizzaDom;
	int menuID = 3;

	pizzaDom.FindMenuLinker(pizza, menuID);

	return 0;
}
