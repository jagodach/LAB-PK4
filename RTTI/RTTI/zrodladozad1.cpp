//
//  zrodladozad1.cpp
//  RTTI
//
//  Created by Jagoda Chmielewska on 03/03/2020.
//  Copyright © 2020 Jagoda Chmielewska. All rights reserved.
//

#include <stdio.h>
class Grzegorz{
    virtual void f() {};
};
class Nina: public Grzegorz{
    virtual void f() {};
};
class Patryk: public Nina{};
class Kamil:public Grzegorz{};
class Dominik{
    virtual void f() {};
};
class Zuzanna:public Dominik{};
class Marek{
    virtual void f() {};
};




static  Grzegorz* A = new Grzegorz;
static Grzegorz* D = new Nina;
static Nina* E = new Patryk;
static Grzegorz* B = new Kamil;
static Dominik* F = new Dominik;
static Dominik* C = new Zuzanna;
static Marek* G = new Marek;
