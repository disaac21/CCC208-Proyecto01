#include "Rectangulo.h"
#include <iostream>
#include<string>
using namespace std;

Rectangulo::Rectangulo() {

}
Rectangulo::Rectangulo(int a, int b) {
    this->a = a;
    this->b = b;
}
Rectangulo::~Rectangulo(){

}

int Rectangulo::geta() const {
    return a;
}
int Rectangulo::getb() const {
    return b;
}

void Rectangulo::seta(int a){
    this->a = a;
}
void Rectangulo::setb(int b){
    this->b = b;
}
