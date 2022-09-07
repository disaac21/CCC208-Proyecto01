#pragma once
#include <iostream>
#include<string>
using namespace std;

class Rectangulo {
    int a;
    int b;

    public:
        Rectangulo();
        Rectangulo(int a, int b);
        ~Rectangulo();

        int geta() const;
        int getb() const;

        void seta(int);
        void setb(int);

};