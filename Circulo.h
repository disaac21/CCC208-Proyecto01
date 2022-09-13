#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Circulo {
    int r;

    public:
        Circulo(int r);
        ~Circulo();

        int getr() const;

        void setr(int);

        void Dibujar();
};