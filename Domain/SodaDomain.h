#ifndef SODADOMAIN_H
#define SODADOMAIN_H
#include "../Repo/SodaRepository.h"

class SodaDomain{
	private:
		SodaRepository repo;
	public:
		SodaDomain();
		void addSoda(Soda& soda);
		vector<Soda> getSoda();
};

#endif
