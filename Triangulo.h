#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Triangulo {
    int a;
    int b;
    int c;
    int h;

    public:
        Triangulo(int a, int b, int c, int h);
        ~Triangulo();

        int geta() const;
        int getb() const;
        int getc() const;
        int geth() const;

        void seta(int);
        void setb(int);
        void setc(int);
        void seth(int);

        void Dibujar();
};