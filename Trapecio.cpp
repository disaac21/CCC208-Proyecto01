#include "Trapecio.h"

using namespace std;

Trapecio::Trapecio(int a, int b, int c, int h, int B) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->h = h;
    this->B = B;
}
Trapecio::~Trapecio(){

}

int Trapecio::geta() const {
    return a;
}
int Trapecio::getb() const {
    return b;
}
int Trapecio::getc() const {
    return c;
}
int Trapecio::geth() const {
    return h;
}
int Trapecio::getB() const {
    return B;
}

void Trapecio::seta(int a){
    this->a = a;
}
void Trapecio::setb(int b){
    this->b = b;
}
void Trapecio::setc(int c){
    this->c = c;
}
void Trapecio::seth(int h){
    this->h = h;
}
void Trapecio::setB(int B){
    this->B = B;
}

void Trapecio::Dibujar() {
    ifstream ArchivoTrapecio("Trapecio.txt", ios::in);

    if (!ArchivoTrapecio) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    string line;
    while (getline(ArchivoTrapecio, line))
        cout << line << endl;
}