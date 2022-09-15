#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <regex>
#include <iterator>

using namespace std;

class Trapecio {
    int a;
    int b;
    int c;
    int h;
    int B;

    public:
        Trapecio(int a, int b, int c, int h, int B);
        ~Trapecio();

        int geta() const;
        int getb() const;
        int getc() const;
        int geth() const;
        int getB() const;

        void seta(int);
        void setb(int);
        void setc(int);
        void seth(int);
        void setB(int);

        void Dibujar();
        string centerString(string input, int width);
};