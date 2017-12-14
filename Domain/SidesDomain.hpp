//
//  SidesDomain.hpp
//  Verklegt_2.0
//
//  Created by Halldór Alvar Kjartansson on 13/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef SidesDomain_hpp
#define SidesDomain_hpp
#include <vector>
#include <iostream>
#include <stdio.h>
#include "Sides.h"
#include "SidesRepo.hpp"

using namespace std;

class SidesDomain{
    
private:
    SidesRepository repo;
    
public:
    void addSides(Sides& sides);
    vector<Sides> getSides();

};

#endif /* SidesDomain_hpp */
