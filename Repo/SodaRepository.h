#ifndef SODAREPOSITORY_H
#define SODAREPOSITORY_H
#include "../Model/Soda.h"
#include <vector>
#include <fstream>
class SodaRepository{
	private:
	public:
		SodaRepository();
		void storeSoda(const Soda& soda);
		vector<Soda> fetchSoda();
};



#endif
