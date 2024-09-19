//
//  liste.hpp
//  Labo8
//
//  Created by Marie-Flavie Auclair-Fortier on 2020-03-11.
//  Copyright © 2020 Marie-Flavie Auclair-Fortier. All rights reserved.
//

#ifndef liste_hpp
#define liste_hpp

// Definition des constantes
const int CODE_ABSENCE = -2;    // code si l'element est absent de la liste
const int CODE_ERREUR = -1;     // code si erreur
const int TAILLE_MAX = 40;

// Definition des nouveaux types
struct Liste
{
    int taille;                  // taille logique de la liste
    float tableau[TAILLE_MAX];   // representation interne de la liste
};

// Signatures des fonctions de la liste a implementer

// Description: insere un element a la fin de la liste
// param[E] un entier a inserer
// param[ES] une liste d'entiers
// param[S] la position de l'element insere : entier
// pre : la taille de la liste est entre 0 et TAILLE_MAX-1
// post : Si l’element est deja present, la fonction retourne CODE_ERREUR
//        sinon l'element est ajoute a la fin du tableau
//        la fonction retourne la position a laquelle l’element a ete ajoute
//        position = nouvelle taille - 1
int ajoute(float, Liste&);




// Description: recherche un entier dans la liste
// param[E] un entier a rechercher
// param[E] une liste d'entiers
// param[S] la position de l'element trouve : entier > -1 et < taille
// pre : la taille de la liste est entre 0 et TAILLE_MAX
// post : Si l’element est present, la fonction retourne sa position
//        sinon  elle retourne CODE_ABSENCE
//        position > -1 et < taille
int recherche(float, const Liste&);




// Description: retire un element de la liste
// param[E] un entier a retirer
// param[ES] une liste d'entiers
// param[S] la position de l'element retire : entier
// pre : la taille de la liste est entre 0 et TAILLE_MAX
// post : Si l’element n'est pas present dans la liste, la fonction retourne CODE_ERREUR
//        Si l’element est present, tous les elements qui suivent celui-ci sont decales d'un indice vers 0
//        Si l’element est present, la taille de la liste est reduite de 1
//        Si l’element est present, la fonction retourne l'ancienne position de l’element retire
//        le retour est entre 0 et la nouvelle taille
//        la nouvelle taille est entre 0 et TAILLE_MAX
int retire(float, Liste&);

#include <stdio.h>

#endif /* liste_hpp */
