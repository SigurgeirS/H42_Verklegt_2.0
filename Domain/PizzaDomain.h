#ifndef PIZZADOMAIN_H
#define PIZZADOMAIN_H

#include "../Model/Pizza.h"
#include "../Repo/PizzaRepository.h"
#include "../Repo/LinkerRepository.h"
#include <vector>
#include <cstring>
#include <string>
#include <iostream>

class PizzaDomain {
        private:
            PizzaRepository repo;
            LinkerRepository Link_rep;
            Pizza pizza;
        public:
                void addPizza(Pizza& pizza);
                vector<Pizza> getPizza();
                void Topping_Linker_store(Linker& linker);
                void Size_Linker_store(Linker& linker);
                void Base_Linker_store(Linker& linker);
                void FindMenuLinker(Pizza& pizza, int ID);
};

#endif

