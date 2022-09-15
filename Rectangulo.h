#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <regex>
#include <iterator>

using namespace std;

class Rectangulo {
    int a;
    int b;

    public:
        Rectangulo(int a, int b);
        ~Rectangulo();

        int geta() const;
        int getb() const;

        void seta(int);
        void setb(int);

        void Dibujar();
        string centerString(string input, int width);
};