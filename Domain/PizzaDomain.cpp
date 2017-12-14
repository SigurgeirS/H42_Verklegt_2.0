#include "PizzaDomain.h"

const string toppinglinkerfilename = "toppinglinker.txt";
void PizzaDomain::Topping_Linker(Linker& linker){
      string filename = toppinglinkerfilename;
      linker.storeLinker(linker,toppinglinkerfilename.c_str());
}

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
#include "../Model/Linker.h"
	Linker linker;
	PizzaDomain pizzadomain;
	pizzadomain.Topping_Linker(linker);
	return 0;
}
