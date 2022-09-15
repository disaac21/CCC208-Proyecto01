#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <regex>
#include <iterator>

using namespace std;

class Cometa {
    int a;
    int b;
    int d;
    int D;

    public:
        Cometa(int a, int b, int d, int D);
        ~Cometa();

        int geta() const;
        int getb() const;
        int getd() const;
        int getD() const;

        void seta(int);
        void setb(int);
        void setd(int);
        void setD(int);

        void Dibujar();
        string centerString(string input, int width);
};