//
//  main.cpp
//  Devoir 4 IFT 159
//
//  Created by Thomas Alexandre on 2023-10-29.
//

#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;
int main()
{
    
    //Part 1 Create and print sudoku from document
    
    //1.1 Insert numbers into sudoku file
    
    /*ofstream outfile("outfile.txt");
        outfile << "I'm in a file!" << endl;
        int x = 200;
        outfile << x << endl;
        outfile.close();*/
    
    
    //1.2 Read numbers from sudoku file
    
    /*sudoku_file.open("sudoku_file.txt", ios::in);
        if (!sudoku_file) {
            cout << "No such file";
        }
        else {
            int num;

            while (1) {
                sudoku_file >> num;
                if (sudoku_file.eof())
                    break;

                cout << num ;
            }
            cout << endl;
        }
        sudoku_file.close();*/

    
    
    //Part 2 Verify the sudoku
    
    //Test for printing sudoku grid
    cout<<"|---------|---------|---------|"<<endl;
    cout<<"| 3  4  9 | 5  6  7 | 8  2  1 |"<<endl;
    cout<<"| 3  4  9 | 5  6  7 | 8  2  1 |"<<endl;
    cout<<"| 3  4  9 | 5  6  7 | 8  2  1 |"<<endl;
    cout<<"|---------|---------|---------|"<<endl;
    cout<<"| 3  4  9 | 5  6  7 | 8  2  1 |"<<endl;
    cout<<"| 3  4  9 | 5  6  7 | 8  2  1 |"<<endl;
    cout<<"| 3  4  9 | 5  6  7 | 8  2  1 |"<<endl;
    cout<<"|---------|---------|---------|"<<endl;
    cout<<"| 3  4  9 | 5  6  7 | 8  2  1 |"<<endl;
    cout<<"| 3  4  9 | 5  6  7 | 8  2  1 |"<<endl;
    cout<<"| 3  4  9 | 5  6  7 | 8  2  1 |"<<endl;
    cout<<"|---------|---------|---------|"<<endl;
    cout<<endl<<endl;
    //Test for printing sudoku grid from table
    
    int tableau[81]={1,2,3,4,5,6,7,8,9,2,1,1,1,1,1,1,1,1,3,1,1,1,1,5,1,1,1,4,4,1,1,1,1,6,7,9,5,5,5,1,1,1,1,1,6,6,1,1,6,1,1,6,6,6,7,1,1,1,7,1,1,1,1,8,8,1,1,1,8,1,1,1,9,2,3,4,5,6,9,8,9};
    
    //int tableau [81]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9};
    
    //int tableau [81]={4,5,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,5,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5};
    
    for (int i=0;i<81;i++)
    {
        cout<<tableau[i]<<" ";
    }
    cout<<endl<<endl;
    
    //Code for afficherSudoku
    
    cout<<"|---------|---------|---------|"<<endl;
    for (int m=0;m<3;m++)
    {
        for (int l=0;l<3;l++)
        {
            for (int n=0;n<3;n++)
            {
                cout<<"|";
                for (int i=0;i<3;i++)
                {
                    int e;
                    e=3*n+i+9*l+27*m;
                    cout<<" "<<tableau[e]<<" ";
                }
            }
            cout<<"|";
            cout<<endl;
        }
        cout<<"|---------|---------|---------|"<<endl;
    }
    cout<<endl;
    
    //Code pour vérifier le sudoku
    
    //1.1 Do all the lines add up to 45
    
    for (int m=0;m<3;m++)
    {
        for (int l=0;l<3;l++)
        {
            int total = 0;
            for (int n=0;n<3;n++)
            {
                for (int i=0;i<3;i++)
                {
                    int e;
                    e=3*n+i+9*l+27*m;
                    total = total + tableau[e];
                }
            }
        }
    }
    
    //1.2 Do all the columns add up to 45
    
    for (int i=0;i<9;i++)
    {
        int total = 0;
        for (int n=0;n<9;n++)
        {
            int e;
            e=i+9*n;
            total = total + tableau[e];
        }
        if (total != 45)
        {
            int colonneErreur;
            colonneErreur=i+1;
            cout<<"Erreur à la colonne "<< colonneErreur <<endl;
        }
    }

    //1.3 Do all the regions add up to 45
    
    for (int r=0;r<9;r++)
    {
        int total = 0;
        for (int l=0;l<3;l++)
        {
            for (int c=0;c<3;c++)
            {
                int e;
                e=c+9*l+3*r;
                total = total + tableau[e];
            }
        }
        if (total != 45)
        {
            int regionErreur;
            regionErreur=1+r;
            cout<<"Erreur à la region "<< regionErreur <<endl;
        }
    }
    
    
    //Results from number comparison
    
    //For comparing lines
    
    
    for (int m=0;m<3;m++)
    {
        for (int l=0;l<3;l++)
        {
            for (int n=0;n<3;n++)
            {
                for (int i=0;i<3;i++)
                {
                    for (int k=i+1;k<9;k++)
                    {
                        int e;
                        e=3*n+i+9*l+27*m;
                        if (tableau[e]==tableau[k])
                        {
                            int ligneErreur;
                            ligneErreur=l+3*m+1;
                            cout<<"Erreur à la ligne "<<ligneErreur<<endl;
                            break;
                        }
                    }
                }
            }
        }
    }

    
    
    //For regions
    
    cout<<endl<<endl<<endl;
    
    for (int r=0;r<9;r++)
    {
        
        for (int l=0;l<3;l++)
        {
            for (int c=0;c<3;c++)
            {
                for (int k=c+1;k<9;k++)
                {
                    int e;
                    e=c+9*l+3*r;
                    if (tableau[e]==tableau[k])
                    {
                        int regionErreur;
                        regionErreur=1+r;
                        cout<<"Erreur à la region "<<regionErreur<<endl;
                    }
                }
            }
        }
        
    }
    
    
    
    return 0;
}
