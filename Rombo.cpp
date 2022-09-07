#include "Rombo.h"
#include <iostream>
#include<string>
using namespace std;

Rombo::Rombo() {

}
Rombo::Rombo(int a, int d, int D) {
    this->a = a;
    this->d = d;
    this->D = D;
}
Rombo::~Rombo(){

}

int Rombo::geta() const {
    return a;
}
int Rombo::getd() const {
    return d;
}
int Rombo::getD() const {
    return D;
}

void Rombo::seta(int a){
    this->a = a;
}
void Rombo::setd(int d){
    this->d = d;
}
void Rombo::setD(int D){
    this->D = D;
}
