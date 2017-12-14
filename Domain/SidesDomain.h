#ifndef SIDESDOMAIN_H
#define SIDESDOMAIN_H
#include "../Repo/SidesRepository.h"

class SidesDomain{
	private:
		SidesRepository repo;
	public:
		SidesDomain();
		void addSides(Sides& side);
		vector<Sides> getSides();
};

#endif
