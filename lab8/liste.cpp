//
//  liste.cpp
//  Labo 8 IFT 159
//
//  Created by Thomas Alexandre on 2023-11-03.
//

//Implimenter les fonctions recherche, ajoute et retire

#include "liste.hpp"
#include <iostream>

using namespace std;

int ajoute(float nombre, Liste& liste)
{
    //First identify if element is in list
    int resultat;
    resultat = recherche(nombre, liste);
    
    //Then add element to list if it is not there already
    
    if (resultat == -2)
    {
        liste.tableau[liste.taille] = nombre;
        liste.taille++;
    }
    
    return TAILLE_MAX;
}


int recherche(float nombre, const Liste& liste)
{
    for (int i=0; i<TAILLE_MAX;i++)
    {
        if (nombre == liste.tableau[i])
        {
            return i;
        }
    }
    return -2;
}

int retire(float nombre, Liste& liste)
{
    int resultat;
    resultat = recherche(nombre, liste);
    
    if (resultat != 2)
    {
        for (int i=resultat;i<liste.taille;i++)
        {
            liste.tableau[i] = liste.tableau[i+1];
        }
        
        return resultat;
    }
    
    return -1;
}
