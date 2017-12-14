#ifndef PIZZADOMAIN_H
#define PIZZADOMAIN_H
#include "../Model/Pizza.h"
#include "../Repo/PizzaRepository.h"
#include "../Repo/LinkerRepository.h"
#include <vector>
#include "../Model/Linker.cpp"
#include <cstring>
#include <string>
#include <iostream>

class PizzaDomain {
	private:
		PizzaRepository repo;

	public:
		void addPizza(Pizza& pizza);
		vector<Pizza> getPizza();
                void Topping_Linker(Linker& linker);
};

#endif
