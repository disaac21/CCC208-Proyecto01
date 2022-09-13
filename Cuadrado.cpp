#include "Cuadrado.h"

using namespace std;

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

void Cuadrado::Dibujar() {
    ifstream ArchivoCuadrado("Cuadrado.txt", ios::in);

    if (!ArchivoCuadrado) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    string line;
    while (getline(ArchivoCuadrado, line))
        cout << line << endl;
}
