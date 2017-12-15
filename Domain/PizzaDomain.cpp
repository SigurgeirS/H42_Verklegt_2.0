#include "PizzaDomain.h"
/*This class is the pizza itself and takes the linkers and put them to a file*/
const string toppinglinkerfilename = "toppinglinker.txt";
const string sizelinkerfilename = "sizelinker.txt";
const string baselinkerfilename = "baselinker.txt";
const string orderlinkerfilename = "orderlinker.txt";
const string menulinkerfilename = "menulinker.txt";

void PizzaDomain::Topping_Linker_store(Linker& linker){
      Link_rep.storeLinker(linker,toppinglinkerfilename.c_str());
}

void PizzaDomain::Size_Linker_store(Linker& linker){
     Link_rep.storeLinker(linker,sizelinkerfilename);
}

void PizzaDomain::Base_Linker_store(Linker& linker){
     Link_rep.storeLinker(linker,baselinkerfilename.c_str());
}

void PizzaDomain::MenuLinkerStore(Linker& linker){
     Link_rep.storeLinker(linker,menulinkerfilename.c_str());
}

vector<Linker> PizzaDomain::FindMenuLinker(Linker& linker){
     vector<Linker> links = Link_rep.fetchLinker(menulinkerfilename.c_str());
     vector<Linker> found_links;
       for(int i = 0; i < links.size(); i++){
         if(links.getIDa() == links[i].getIDa()){
             found_links.push_back(links[i]);
         }
     }
  
     for(int i = 0; i < found_links.size(); i++){
         found_links[i] = pizza.getID();
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

