#include "Linker.h"

Linker::Linker(){
	//cstr
}

void Linker::setIDa(int ID){
	IDa = ID;
}

void Linker::setIDb(int ID){
	IDb = ID;
}

int Linker::getIDa(){
<<<<<<< HEAD
     return IDa;
}

int Linker::getIDb(){
     return IDb;
=======
	return IDa;
}

int Linker::getIDb(){
	return IDb;
>>>>>>> 5da6c079735132f9aeb44b49374db2ade486723d
}

ostream& operator << (ostream& out, const Linker& link){
	out<<link.IDa<<endl<<link.IDb<<endl;
	return out;
}

istream& operator >> (istream& in, Linker& link){
	in>>link.IDa>>link.IDb;
	return in;
}
