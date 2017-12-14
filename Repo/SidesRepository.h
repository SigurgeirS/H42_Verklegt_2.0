#ifndef SIDESREPOSITORY_H
#define SIDESREPOSITORY_H
#include <fstream>
#include "../Model/Sides.h"
#include <vector>

class SidesRepository{
	private:
	public:
		SidesRepository();
		void storeSides(const Sides& side);
		vector<Sides> fetchSides();
};

#endif
