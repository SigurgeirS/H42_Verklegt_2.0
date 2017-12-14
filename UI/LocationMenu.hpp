//
//  LocationMenu.hpp
//  Verklegt namskeið
//
//  Created by Halldór Alvar Kjartansson on 12/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef LocationMenu_hpp
#define LocationMenu_hpp
#include <iostream>
#include <stdio.h>
#include "DeliveryExceptions.hpp"
using namespace std;

class locationMenu{
public:
	void validateLocation(int input)throw(InvalidLocationException);
private:
	
};

#endif /* LocationMenu_hpp */
