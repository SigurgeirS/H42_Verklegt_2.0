
//
//  SidesRepo.cpp
//  Verklegt_2.0
//
//  Created by Halldór Alvar Kjartansson on 13/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "SidesRepo.hpp"
SidesRepository::SidesRepository(){
// constructor
}

void SidesRepository::storeSides(const Sides& sides){
    ofstream fout;
    fout.open("sides.txt",ios::app);
    if(fout.is_open()){
        
        fout << sides;
        
        fout.close();
    }else{
        //throw exception
    }
}

vector<Sides> SidesRepository::fetchSides(){
    vector<Sides> sides;
    ifstream fin;
    
    fin.open("sides.txt");
    
    if(fin.is_open()){
        Sides sidess;
        sidess.verbose = false;
        while(fin.good()){
            fin>>sidess;
            sides.push_back(sidess);
        }
        fin.close();
        sides.pop_back();
    }else{
        cout<<"could not open file"<<endl;
        // Throw exception
    }
    return sides;
}


