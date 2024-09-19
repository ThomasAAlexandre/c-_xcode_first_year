//
//  position.h
//

#ifndef POSITION_H
#define POSITION_H
#include <iostream>
using namespace std;

class Position
{
    int l;
    int c;
    
public:
    Position()
    {
        l=0;
        c=0;
    }
    Position(int l,int c)
    {
        l = l;
        c = c;
    }
    int ligne()
    {
        return l;
    }
    int colonne()
    {
        return c;
    }
    
    
    friend std::istream& operator>> (std::istream& in, Position& position);
    friend std::ostream& operator<< (std::ostream& out, Position& position);
    
};




#endif /* Position_h */
