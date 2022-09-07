#pragma once
#include <iostream>
#include<string>
using namespace std;

class Cuadrado {
    int a;

    public:
        Cuadrado();
        Cuadrado(int a);
        ~Cuadrado();

        int geta() const;

        void seta(int);

};