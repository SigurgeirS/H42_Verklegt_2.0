//
//  SizeDomain.hpp
//  NEW NEW verklegt
//
//  Created by Halldór Alvar Kjartansson on 15/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef Pizza_sizeDomain_hpp
#define Pizza_sizeDomain_hpp
#include <iostream>
#include <stdio.h>
#include "../Repo/Pizza_sizeRepository.h"
#include <vector>
using namespace std;

class Pizza_sizeDomain {
private:
    Pizza_sizeRepository repo;
public:
    Pizza_sizeDomain();
    void addSize(Pizza_size& size);
    vector<Pizza_size> getSize();
};

#endif /* SizeDomain_hpp */


