#ifndef LINKERDOMAIN_H
#define LINKERDOMAIN_H
#include "../Repo/LinkerRepository.h"
#include "../Model/Linker.h"

class LinkerDomain{
	private:
		LinkerRepository repo;
	public:
		LinkerDomain();
		void addLinker(const Linker& link);
		vector<Linker> getLinker();
};


#endif
