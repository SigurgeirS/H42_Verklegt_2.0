//
//  domain.cpp
//  Verklegt namskeið
//
//  Created by Halldór Alvar Kjartansson on 12/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "Deliverydomain.hpp"
#include "..\location m./get funct.hpp"

char location::get_location(char input){
//	Notandi velur sinn afhendingarstað
	
}
void Domain::print_pizzalist(){
//	Fá upp lista af pöntunum, bara fyrir þennan stað
}
void Domain::print_ready_pizza(){
//	Fá upp lista af tilbúnum pöntunum, bara fyrir þennan stað
}
void Domain::get_specific_order(){
//	Fá upp tiltekna pöntun
	try {
		if(x){
			throw InvalidOrderNumber("No order with that order number!");
		}
		else {
			//
		}
	}
	
}
bool Domain::paid(/*vector*/){
//	Merkja pöntun greidda
	//	fout.("Order has been paid for");
}
bool Domain::delivered(/*vector*/){
//	Merkja pöntun afhenta
}

