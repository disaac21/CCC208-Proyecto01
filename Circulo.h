#pragma once
#include <iostream>
#include<string>
using namespace std;

class Circulo {
    int r;

    public:
        Circulo();
        Circulo(int r);
        ~Circulo();

        int getr() const;

        void setr(int);

};