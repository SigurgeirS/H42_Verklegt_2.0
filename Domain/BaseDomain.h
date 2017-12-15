#ifndef BASEDOMAIN_H
#define BASEDOMAIN_H

#include "../Repo/BaseRepository.h"
#include <vector>

class BaseDomain {
	private:
		BaseRepository repo;
	public:
		BaseDomain();
		void addBase(Base& base);
		vector<Base> getBase();

};


#endif
