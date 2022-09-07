#include "Paralelogramo.h"
#include <iostream>
#include<string>
using namespace std;

Paralelogramo::Paralelogramo() {

}
Paralelogramo::Paralelogramo(int a, int b, int h) {
    this->a = a;
    this->b = b;
    this->h = h;
}
Paralelogramo::~Paralelogramo(){

}

int Paralelogramo::geta() const {
    return a;
}
int Paralelogramo::getb() const {
    return b;
}
int Paralelogramo::geth() const {
    return h;
}

void Paralelogramo::seta(int a){
    this->a = a;
}
void Paralelogramo::setb(int b){
    this->b = b;
}
void Paralelogramo::seth(int h){
    this->h = h;
}
