#include "Rombo.h"

using namespace std;

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

void Rombo::Dibujar() {
    ifstream ArchivoRombo("Rombo.txt", ios::in);

    if (!ArchivoRombo) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    string line;
    while (getline(ArchivoRombo, line))
        cout << line << endl;
}