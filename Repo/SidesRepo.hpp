//
//  SidesRepo.hpp
//  Verklegt_2.0
//
//  Created by Halldór Alvar Kjartansson on 13/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef SidesRepo_h
#define SidesRepo_h
#include <stdio.h>
#include <fstream>
#include "SidesDomain.h"
#include "Sides.h"

class SidesRepository {

public:
    SidesRepository();
    void storeSides(const Sides& sides);
    vector<Sides> fetchSides();
private:
};

#endif /* SidesRepo_hpp */
