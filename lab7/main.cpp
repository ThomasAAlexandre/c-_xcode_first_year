//
//  main.cpp
//  Labo-7 redo IFT 159
//
//  Created by Thomas Alexandre on 2023-10-19.
//

#include <iostream>

using namespace std;

//Cree un tableau de 10 elements et trier ce tableau

int main()
{
    const int TAILLE {10};
    
    int tab[TAILLE];
    
    //Inserer les valeurs dans le tableau
    cout<<"Entrer 10 entiers: ";
    
    for (int i=0; i<TAILLE; i++)
    {
        cin>>tab[i];
    }
    
    //Afficher le nouveau tableau
    for (int e=0;e<TAILLE;e++)
    {
        cout<<tab[e]<<" ";
    }
    cout<<endl;
    
    //Trier le tableau
    for (int e=TAILLE; e>0; e--)
    {
        for (int i=0; i<TAILLE-1;i++)
        {
            int j;
            j=i+1;
            if (tab[i]>tab[j])
            {
                int temporaire=0;
                temporaire=tab[j];
                tab[j]=tab[i];
                tab[i]=temporaire;
            }
        }
    }
    //Afficher nouveau tableau
    for (int e=0;e<TAILLE;e++)
    {
        cout<<tab[e]<<" ";
    }
    cout<<endl;
    
    return 0;
}
