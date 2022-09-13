#include "Cometa.h"

using namespace std;

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

void Cometa::Dibujar() {
    ifstream ArchivoCometa("Cometa.txt", ios::in);

    if (!ArchivoCometa) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    string line;
    while (getline(ArchivoCometa, line))
        cout << line << endl;
}
