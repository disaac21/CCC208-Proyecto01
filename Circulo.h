#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <regex>
#include <iterator>

using namespace std;

class Circulo {
    int r;

    public:
        Circulo(int r);
        ~Circulo();

        int getr() const;

        void setr(int);

        void Dibujar();
        string CortarDecimales(string);
        string centerString(string input, int width);
};