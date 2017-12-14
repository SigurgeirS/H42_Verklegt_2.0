#ifndef LINKERREPO_H
#define LINKERREPO_H
#include "../Model/Linker.h"
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class LinkerRepository {
	private:
		string fileName;
	public:
		LinkerRepository();
		void setFileName(const string& file);
		string getFileName();
		void storeLinker(const Linker& link, string filename);
		vector<Linker> fetchLinker();

};

#endif
