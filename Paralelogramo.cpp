#include "Paralelogramo.h"

using namespace std;

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

void Paralelogramo::Dibujar() {
    ifstream ArchivoParalelogramo("Paralelogramo.txt", ios::in);

    if (!ArchivoParalelogramo) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    string line;
    while (getline(ArchivoParalelogramo, line))
        cout << line << endl;
}
