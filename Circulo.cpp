#include "Circulo.h"

using namespace std;

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

void Circulo::Dibujar() {
    ifstream ArchivoCirculo("Circulo.txt", ios::in);

    if (!ArchivoCirculo) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    string line;
    while (getline(ArchivoCirculo, line))
        cout << line << endl;
}