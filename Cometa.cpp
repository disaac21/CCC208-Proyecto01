#include "Cometa.h"
#include <iostream>
#include<string>
using namespace std;

Cometa::Cometa() {

}
Cometa::Cometa(int a, int b, int d, int D) {
    this->a = a;
    this->b = b;
    this->d = d;
    this->D = D;
}
Cometa::~Cometa(){

}

int Cometa::geta() const {
    return a;
}
int Cometa::getb() const {
    return b;
}
int Cometa::getd() const {
    return d;
}
int Cometa::getD() const {
    return D;
}

void Cometa::seta(int a){
    this->a = a;
}
void Cometa::setb(int b){
    this->b = b;
}
void Cometa::setd(int d){
    this->d = d;
}
void Cometa::setD(int D){
    this->D = D;
}
