//
//  SizeDomain.cpp
//  NEW NEW verklegt
//
//  Created by Halldór Alvar Kjartansson on 15/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "Pizza_sizeDomain.hpp"

Pizza_sizeDomain::Pizza_sizeDomain(){
    //empty constructor
}

void Pizza_sizeDomain::addSize(Pizza_size &size){
    //this function adds a size
    size.verbose = false;
    repo.storeSize(size);
}

vector<Pizza_size> Pizza_sizeDomain::getSize(){
    int c = 0;
    vector<Pizza_size> sizes;
    sizes = repo.fetchSize();
    while(c < sizes.size()){
        sizes[c].verbose = true;
        c++;
    }
    return sizes;
}

