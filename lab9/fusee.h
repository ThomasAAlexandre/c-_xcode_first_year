//
//  fusee.h
//  Labo-9 IFT 159
//
//  Created by Thomas Alexandre on 2023-11-11.
//

#ifndef fusee_h
#define fusee_h

#include <ostream>
#include <cassert>

//Declaration de la class fusee
class Fusee
{
private:
    
    //Variables constantes
    const static int HAUTEUR_ETAGE_MIN = 3; //Hauteur minimum des etages
    const static int LARGEUR_ETAGE_MIN = 4; //Largeur minimum des etages
    const static int NOMBRE_ETAGES_MIN = 1; //Nombre d'etages minimum
    
    //Declaration des variables locales
    int hauteurEtage; //Hauteur des etages
    int largeurEtage; // Largeur des etages
    int nb_etages; //Nombre d'etages
    bool allume_ou_non = false; //Controle si la fusee est allume ou non
    
    //Declaration des fonctions locales
    void afficheEtages(std::ostream&)const; //fonction qui affiche les etages de la fusee
    void afficheCargo(std::ostream&)const; //fonction qui affiche le cargo de la fusee
    void afficheMoteur(std::ostream&)const; //fonction qui affiche le moteur de la fusee
    
public:
    //Initialisation du constructeur fusee
    Fusee()
    {
        hauteurEtage=HAUTEUR_ETAGE_MIN;
        largeurEtage=LARGEUR_ETAGE_MIN;
        nb_etages=NOMBRE_ETAGES_MIN;
    }
    //Surcharge du constructeur fusee avec un parametre de int
    Fusee(int nb_etage)
    {
        assert(nb_etage>0);
        hauteurEtage=HAUTEUR_ETAGE_MIN;
        largeurEtage=LARGEUR_ETAGE_MIN;
        nb_etages=nb_etage;
        

    }
    
    //Declaration des fonctions publics
    void largeur(int); //fonction qui donne la valeur a la largeur de l'etage
    void hauteur(int); //fonction qui donne la valeur a l'hauteur de l'etage
    void allume(); //fonction qui change la valeur de allume_ou_non
    
    //Declaration de la fonction amie
    friend std::ostream& operator<<(std::ostream& out, const Fusee& f);
};



#endif /* fusee_h */
