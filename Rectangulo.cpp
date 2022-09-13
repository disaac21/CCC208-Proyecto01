#include "Rectangulo.h"

using namespace std;

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

void Rectangulo::Dibujar() {
    ifstream ArchivoRectangulo("Rectangulo.txt", ios::in);

    if (!ArchivoRectangulo) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    string line;
    while (getline(ArchivoRectangulo, line))
        cout << line << endl;
}
