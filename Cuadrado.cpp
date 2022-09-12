#include "Cuadrado.h"
#include <iostream>
#include<string>
using namespace std;

Cuadrado::Cuadrado() {

}
Cuadrado::Cuadrado(int a) {
    this->a = a;
}
Cuadrado::~Cuadrado(){

}

int Cuadrado::geta() const {
    return a;
}

void Cuadrado::seta(int a){
    this->a = a;
}
