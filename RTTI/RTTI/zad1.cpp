//
//  zad1.cpp
//  RTTI
//
//  Created by Jagoda Chmielewska on 03/03/2020.
//  Copyright © 2020 Jagoda Chmielewska. All rights reserved.
//
//W podanym pliku cpp znajdują się obiekty ( A,B,C,D,E,F,G). Należy wypisać relacje pomiędzy nimi i ich nazwy.
#include <stdio.h>
#include <iostream>
#include "zrodladozad1.cpp"


using namespace std;
/*int main() {
    
    cout<<typeid(*A).name()<<endl;
    cout<<typeid(A).name()<<endl;
    
    cout<<typeid(*B).name()<<endl;
    cout<<typeid(B).name()<<endl;
    
    cout<<typeid(*C).name()<<endl;
    cout<<typeid(C).name()<<endl;
    
    cout<<typeid(*D).name()<<endl;
    cout<<typeid(D).name()<<endl;
    
    cout<<typeid(*E).name()<<endl;
    cout<<typeid(E).name()<<endl;
    
    cout<<typeid(*F).name()<<endl;
    cout<<typeid(F).name()<<endl;
    
    cout<<typeid(*G).name()<<endl;
    cout<<typeid(G).name()<<endl;
 }
    */
    /* Nina dziedziczy po Grzegorzu
     Kamil dziedziczy po Grzegorzu
     Grzegorz nie dziedziczy po nikim
     Patryk dziedziczy po Ninie
     Zuzanna dziedziczy po Dominiku
     Marek i Dominik nie dziedzicza po nikim
     */
    
    /* Grzegorz po nikim nie dziedzczy
     * Nina dziedziczy po Grzegorz
     * Kamil dziedziczy po Grzegorz
     * Patryk dziedzczy po Nina
     * Marek po nikim nie dziedzczy
     * Dominik po nikim nie dziedziczy
     * Zuzanna dziedziczy po Dominik
     */

