//
//  fusee.cpp
//  Labo-9 IFT 159
//
//  Created by Thomas Alexandre on 2023-11-11.
//
#include <iostream>
#include <fstream>
#include "fusee.h"

using namespace std;

//Change la valeur de la longeur des etages
void Fusee::largeur(int largeur)
{
    largeurEtage = largeur;
}

//Change la valeur de la hauteur des etages
void Fusee::hauteur(int hauteur)
{
    hauteurEtage = hauteur;
}

//Affiche le cargo de la fusee
void Fusee::afficheCargo(std::ostream &out)const
{
    int baseEtage = 2*largeurEtage;
    int hauteurCargo = largeurEtage;
    
    for (int nbLignes = 0; nbLignes < hauteurCargo; nbLignes++)
        {
            for (int nbEspacesAvant = hauteurCargo - nbLignes -1; nbEspacesAvant > 0; nbEspacesAvant--)
            {
                out << ' ';
            }
            out << '/';
            if (nbLignes == hauteurCargo -1)
            {
                for (int nb_tiret=0;nb_tiret<baseEtage-2;nb_tiret++)
                {
                    out<<'_';
                }
                out << '\\';
            }
            else
            {
                for (int nbEspacesApres = 0; nbEspacesApres < 2 * nbLignes; nbEspacesApres++)
                {
                    out << ' ';
                }
                out << '\\';
                if (nbLignes < hauteurCargo - 1)
                {
                    out<<endl;
                }
            }
        }
        out << endl;
}

//Affiche les etages de la fusee
void Fusee::afficheEtages(std::ostream &out)const
{
    int baseEtage = 2*largeurEtage;

    for (int nb_e = 0; nb_e<nb_etages;nb_e++)
    {
        for (int nb_vert = 0;nb_vert<hauteurEtage;nb_vert++)
        {
            if (nb_vert == hauteurEtage-1)
            {
                out<<'|';
                for (int nb_tiret=0;nb_tiret<baseEtage-2;nb_tiret++)
                {
                    out<<'_';
                }
                out<<'|'<<endl;
            }
            else
            {
                out<<'|';
                for (int nb_espaces = 0;nb_espaces<baseEtage-2;nb_espaces++)
                {
                    out<<' ';
                }
                out<<'|'<<endl;
            }
        }
    }
}

//Affiche le moteur de la fusee
void Fusee::afficheMoteur (std::ostream &out) const
{
    for (int nbLignes = 0; nbLignes < largeurEtage-2; nbLignes++)
    {
        for (int nbEspacesAvant = largeurEtage - nbLignes -2; nbEspacesAvant > 0; nbEspacesAvant--)
        {
            out << ' ';
        }
        out << '/';
        for (int nbEspacesApres = 0; nbEspacesApres < 2 * nbLignes+2; nbEspacesApres++)
        {
            if (allume_ou_non == true)
            {
                out << 'W';
            }
            else
            {
                out << ' ';
            }
        }
        out << '\\' << endl;
    }
}

//Change la valeur qui controle l'allumage de la fusee
void Fusee::allume()
{
    allume_ou_non = true;
}

//Determine l'ordre d'affichage
ostream& operator<< (ostream& out, const Fusee& f)
{
    //Cargo
    f.afficheCargo(out);
    
    //Etages
    f.afficheEtages(out);
    
    // Moteur
    f.afficheMoteur (out);
    
    return out;
}

