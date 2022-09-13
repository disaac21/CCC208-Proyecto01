#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Cuadrado {
    int a;

    public:
        Cuadrado(int a);
        ~Cuadrado();

        int geta() const;

        void seta(int);

        void Dibujar();
};