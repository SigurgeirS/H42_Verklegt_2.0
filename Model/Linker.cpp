#include "Linker.h"

Linker::Linker(){
	//cstr
}

ostream& operator << (ostream& out, const Linker& link){
	out<<link.IDa<<endl<<link.IDb<<endl;
	return out;
}

istream& operator >> (istream& in, Linker& link){
	in>>link.IDa>>link.IDb;
	return in;
}
