//
//  LocationMenu.cpp
//  Verklegt namskeið
//
//  Created by Halldór Alvar Kjartansson on 12/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "LocationMenu.hpp"

void locationMenu::LocationUI(){
/*
	cout << "Press 1: For Grafarvogur" << endl;
	cout << "Press 2: For Hafnarfjorður" << endl;
	cout << "Press 3: For Vesturbaer" << endl;
	cout << "Press 4: For Arbaer" << endl;
	cout << "Press 5: For Kopavogur" << endl;*/
	
	int input;
	cin >> input;
	validateLocation(input);
}
void locationMenu::validateLocation(int input)throw(InvalidLocationException){
	try
	{	if(input <0 && input > 6)
			{
			throw InvalidLocationException();
			}
	else {
		if(input == '1'){
			//location grafarvogur
		}
		else if(input== '2'){
			//For Hafnarfjorður
		}
		else if(input == '3'){
//			For Vesturbaer"
		}
		else if(input== '4'){
//			For Arbaer
		}
		else if(input== '5'){
//			For Kopavogur
		}
		}
	}
}

