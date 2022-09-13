#include "Triangulo.h"

using namespace std;

Triangulo::Triangulo(int a, int b, int c, int h) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->h = h;
}
Triangulo::~Triangulo(){

}

int Triangulo::geta() const {
    return a;
}
int Triangulo::getb() const {
    return b;
}
int Triangulo::getc() const {
    return c;
}
int Triangulo::geth() const {
    return h;
}

void Triangulo::seta(int a){
    this->a = a;
}
void Triangulo::setb(int b){
    this->b = b;
}
void Triangulo::setc(int c){
    this->c = c;
}
void Triangulo::seth(int h){
    this->h = h;
}

void Triangulo::Dibujar() {
    ifstream ArchivoTriangulo("Triangulo.txt", ios::in);

    if (!ArchivoTriangulo) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    } //Se verifica si el archivo se abrio correctamente

    string line;
    while (getline(ArchivoTriangulo, line))
        cout << line << endl; //Se lee el archivo linea por linea
}
