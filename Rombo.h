#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <regex>
#include <iterator>

using namespace std;

class Rombo {
    int a;
    int d;
    int D;

    public:
        Rombo(int a, int d, int D);
        ~Rombo();

        int geta() const;
        int getd() const;
        int getD() const;

        void seta(int);
        void setd(int);
        void setD(int);

        void Dibujar();
        string centerString(string input, int width);
};