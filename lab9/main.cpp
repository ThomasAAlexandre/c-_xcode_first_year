#include <iostream>
#include <fstream>

#include "fusee.h"

using namespace std;

int main()
{
    Fusee f(2);

    cout << f << endl;

    f.largeur(12);
    f.hauteur(6);

    cout << f << endl;

    f.allume();

    cout << f << endl;

    return 0;
}
