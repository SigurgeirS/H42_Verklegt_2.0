#ifndef SALAUI_H
#define SALAUI_H
#include"../Model/order.h"
#include "../UI/MainUI.h"
using namespace std;

class SalaUI{
	private:
    MainUI start;
    Order order;

	public:
		SalaUI();
		void startUI();
};
#endif
