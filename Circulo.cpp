#include "Circulo.h"
#include <iostream>
#include<string>
using namespace std;

Circulo::Circulo() {

}
Circulo::Circulo(int r) {
    this->r = r;
}
Circulo::~Circulo(){

}

int Circulo::getr() const {
    return r;
}

void Circulo::setr(int r){
    this->r = r;
}
