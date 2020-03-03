//
//  zad4.cpp
//  RTTI
//
//  Created by Jagoda Chmielewska on 03/03/2020.
//  Copyright © 2020 Jagoda Chmielewska. All rights reserved.
//
//Stworzyć tablice wszystkich pionków szachowych z podziałem na białe i czarne. Wypisać w konsoli nazwy wszystkich czarnych pionków.

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class chesspieces {
public:
    virtual ~chesspieces() {}
};
class colour: public chesspieces{
    string type, col;
public:
    colour() {
        type = "chesspiece";
        col = "white";
    }
    colour(string n, string t) {
        col = n;
        type = t;
    }
    string get_colour() {
        return col;
    }
    string get_type() {
        return type;
    }
    void show() {
        cout << type << " " << col << endl;
    }
};
int main()
{
    chesspieces* tab[2][16];
   

    for (int i = 1; i < 2; ++i) {
        for (int j = 0; j < 8; ++j) {
            colour black("black", "chesspiece");
            tab[i][j] = dynamic_cast<chesspieces*>(&black);
            black.show();
        }
        for (int j = 8; j < 10; ++j) {
            colour black("black", "rook");
            tab[i][j] = dynamic_cast<chesspieces*>(&black);
            black.show();
        }
        for (int j = 10; j < 12; ++j) {
            colour black("black", "kNight");
            tab[i][j] = dynamic_cast<chesspieces*>(&black);
            black.show();
        }
        for (int j = 12; j<14; ++j) {
            colour black("black", "Bishop");
            tab[i][j] = dynamic_cast<chesspieces*>(&black);
            black.show();
        }
        colour black_h("black", "queen");
        tab[i][14] = dynamic_cast<chesspieces*>(&black_h);
        black_h.show();
        
        colour black_k("black", "king");
        tab[i][15] = dynamic_cast<chesspieces*>(&black_k);
        black_k.show();
        
    }
}



