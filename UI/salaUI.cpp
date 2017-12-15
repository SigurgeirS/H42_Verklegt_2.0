#include"salaUI.h"

SalaUI::SalaUI(){
	//constructor
}

void SalaUI::startUI(){
	cout<<"Chose an option: "<<endl;
    cout<<"Press (a): To create new order"<<endl;
    cout<<"Press (b): To modify existing order"<<endl;
    cout<<"Press (c): To get total order value"<<endl;
    cout<<"Press (d): To mark order pick-up or delivery"<<endl;
    cout<<"Press (e): To mark order paid"<<endl;
    cout<<"Press (f): To set pick-up location"<<endl;
    cout<<"Press (g): To set special instruction"<<endl;
    cout<<"Press (q): To go back to main menu"
	char option;
	cin>>option;
	if(option == 'a'){
		cout<<"Creating order"<<endl;
		order newOrder;
		cin>>newOrder;
	}else if(option == 'b'){
		cout<<"Specify what order you want to modify"<<endl;
		//call domain class for modifying order
        
	}
    else if(option == 'c'){
        cout<<"Specify what order you want to get total value for"<<endl;
        /* Fá upp heildarverð
         get total value of order*/
    }
    else if(option == 'd'){
        cout<<"Specify what order you want to modify"<<endl;
        /* Skrá sent eða sótt
         pickup or delivery*/
    }
    else if(option == 'e'){
        cout<<"Specify what order you want to modify"<<endl;
        /* Merkja pöntun greidda
         set order paid*/
    }
    else if(option == 'f'){
        cout<<"Specify what order you want to modify"<<endl;
        /* Merkja pizzu á ákveðinn afhendingarstað
         set pick-up location*/
    }
    else if(option == 'g'){
        cout<<"Specify what order you want to modify"<<endl;
        /* Skrá athugasemdir
         set special instructions*/
    }
    else if(option == 'q'){
        start.startUI();
    }
    
}

