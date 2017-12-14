#include "PizzaDomain.h"

const string toppinglinkerfilename = "toppinglinker.txt";
const string sizelinkerfilename = "sizelinker.txt";
const string baselinkerfilename = "baselinker.txt";
void PizzaDomain::Topping_Linker(Linker& linker){
      string filename = toppinglinkerfilename;
      linker_repo.storeLinker(linker,toppinglinkerfilename.c_str());
}

void PizzaDomain::Size_Linker(Linker& linker){
     string filename = sizelinkerfilename;

void PizzaDomain::addPizza(Pizza& pizza){
        pizza.verbose = false;
        repo.storePizza(pizza);
}

vector<Pizza> PizzaDomain::getPizza(){
        int c = 0;
        vector<Pizza> pizzas;
        pizzas = repo.fetchPizzas();
        while(c < pizzas.size()){
                pizzas[c].verbose = true;
                c++;
        }
        return pizzas;
}

int main(){
    #include "PizzaDomain.h"
    PizzaDomain pizzadomain;
}
