#include "./Domain/PizzaDomain.h"
#include "./Domain/BaseDomain.h"
int main(){
	Base base;
	BaseDomain dom;
	Pizza pizza;
	PizzaDomain pdom;
	char inp;
	cin>>inp;
	while(inp != 'q'){
		cin>>base;
		cin>>pizza;
		dom.addBase(base);
		pdom.addPizza(pizza);
		cin>>inp;
	}
	//BaseDomain dom;
	//dom.addBase(base);
	//vector<Base> bases;
	//bases = dom.getBase();
	//cout<<bases[0]<<endl;
	return 0;
}
