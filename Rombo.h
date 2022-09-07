#pragma once
#include <iostream>
#include<string>
using namespace std;

class Rombo {
    int a;
    int d;
    int D;

    public:
        Rombo();
        Rombo(int a, int d, int D);
        ~Rombo();

        int geta() const;
        int getd() const;
        int getD() const;

        void seta(int);
        void setd(int);
        void setD(int);

};