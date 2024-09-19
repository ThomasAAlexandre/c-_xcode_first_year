//
//  fonctions.cpp
//  Lab10_2ndtime_IFT159
//
//  Created by Thomas Alexandre on 2023-12-21.
//

#include "fonctions.hpp"

int calculeTermeFibo(int val1)
{
    if (val1==0)
    {
        return 0;
    }
    else if (val1==1)
    {
        return 1;
    }
    else
    {
        return calculeTermeFibo(val1-1)+calculeTermeFibo(val1-2);
    }
}

int calculePGCD(int a, int b)
{
    if (b==0)
    {
        return a;
    }
    else
    {
        return calculePGCD(b, a%b);
    }
}
