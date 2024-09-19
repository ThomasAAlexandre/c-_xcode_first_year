#include "liste.hpp"

#include <iostream>

using namespace std;

// ************************************
// Definition de la fonction principale
// ************************************

int main() {
    
    
    void affiche(const Liste&);
    void initialise(Liste&);
    
    // Declaration des variables locales
    Liste listeDeTest;
    int posElementRecherche;
    float elementARechercher;
    
    // debut du code, initialisation et ajout d'elements dans la liste
    initialise(listeDeTest);
    ajoute(1., listeDeTest);
    ajoute(2.1, listeDeTest);
    ajoute(3.2, listeDeTest);
    ajoute(4., listeDeTest);
    ajoute(5., listeDeTest);
    affiche(listeDeTest);
    
    // test de la recherche
    elementARechercher = 3.2;
    posElementRecherche = recherche(elementARechercher, listeDeTest);
    if (posElementRecherche == CODE_ABSENCE)
    {
        cout << "L'element " << elementARechercher << " est absent de la liste " << endl;
    }
    else
    {
        cout << "La position de " << elementARechercher << " dans la liste est " << posElementRecherche << endl;
    }
    
    // test du retrait
    posElementRecherche = retire(3.2, listeDeTest);
    posElementRecherche = retire(4, listeDeTest);
    affiche(listeDeTest);
    
    posElementRecherche = recherche(3.2, listeDeTest);
    if (posElementRecherche == CODE_ABSENCE)
    {
        cout << "L'element " << elementARechercher << " est absent de la liste " << endl;
    }
    else
    {
        cout << "La position de " << elementARechercher << " dans la liste est " << posElementRecherche << endl;
    }

    return 0;
}

// *********************************
// Definition des fonctions locales
// *********************************


// Description: initialise une liste vide
// param[S] une liste de reels
// post : la taille logique de la liste est initialisee a 0
//        la liste ne contient aucun element valide
void initialise(Liste& s_liste)
{
    s_liste.taille = 0;
}

// Description: affiche une liste a l'ecran
// param[E] une liste de reels
// pre : la taille logique est >= 0
// pre : la taille logique est <= TAILLE_MAX
// post : la taille est affichee
//        chaque element de la liste est affichee a l'ecran
//        chaque element est separe par un espace
void affiche(const Liste& e_liste)
{
    assert(e_liste.taille >= 0);
    assert(e_liste.taille <= TAILLE_MAX);
    
    cout << "La taille de la liste est " << e_liste.taille << endl;
    
    cout<< "Les elements de la liste sont => ";
    
    for (int i = 0; i< e_liste.taille; i++)
    {
        cout << e_liste.tableau[i] << " ";
    }
    
    cout << endl<< endl;
}
