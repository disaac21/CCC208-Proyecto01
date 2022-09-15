#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <regex>
#include <iterator>

using namespace std;

class Cuadrado {
    int a;

    public:
        Cuadrado(int a);
        ~Cuadrado();

        int geta() const;

        void seta(int);

        void Dibujar();
        string centerString(string input, int width);
};