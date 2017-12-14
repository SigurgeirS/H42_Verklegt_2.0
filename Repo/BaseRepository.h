#ifndef BASEREPOSITORY_H
#define BASEREPOSITORY_H

#include "../Model/Base.h"
#include <fstream>
#include <vector>

class BaseRepository {
	private:

	public:
		BaseRepository();
		void fileBase(const Base& base);
		vector<Base> fetchBases();


};

#endif
