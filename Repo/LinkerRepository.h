#ifndef LINKERREPO_H
#define LINKERREPO_H
#include "../Model/Linker.h"
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class LinkerRepository {
	private:
	public:
		LinkerRepository();
		void storeLinker(const Linker& link, string fileName);
		vector<Linker> fetchLinker(string fileName);

};

#endif
