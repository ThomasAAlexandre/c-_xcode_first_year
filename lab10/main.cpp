//
//  main.cpp
//  Labo10
//
//  Created by Marie-Flavie Auclair-Fortier on 18-01-09.
//  Copyright © 2018 Marie-Flavie Auclair-Fortier. All rights reserved.
//  Modifié par : Mehdi Najjar (05/08/2021)
//

#include "fonctions.hpp"
#include <iostream>

using namespace std;

int main() {
    int val1, val2;
    
    cout << "a) 1 valeur pour tester fibonacci => ";
    cin>>val1;
    
    cout<< "la valeur pour la position " << val1 << " de fibonacci est " << calculeTermeFibo(val1) <<endl;

    cout<<"b) 2 valeurs pour tester pgcd => ";
    cin>>val1;
    cin>>val2;
    
    cout<< "Le plus grand commun diviseur est "<< calculePGCD(val1, val2)<<endl;

    
    return 0;

}
