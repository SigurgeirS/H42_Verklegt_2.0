#ifndef LINKERREPO_H
#define LINKERREPO_H
#include "../Model/Linker.h"
#include <vector>
#include <fstream>
using namespace std;

class LinkerRepository {
	private:
	public:
		LinkerRepository();
		void storeLinker(const Linker& link);
		vector<Linker> fetchLinker();

};

#endif
