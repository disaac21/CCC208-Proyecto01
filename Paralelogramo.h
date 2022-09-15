#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <regex>
#include <iterator>

using namespace std;

class Paralelogramo {
    int a;
    int b;
    int h;

    public:
        Paralelogramo(int a, int b, int h);
        ~Paralelogramo();

        int geta() const;
        int getb() const;
        int geth() const;

        void seta(int);
        void setb(int);
        void seth(int);

        void Dibujar();
        string centerString(string input, int width);
};