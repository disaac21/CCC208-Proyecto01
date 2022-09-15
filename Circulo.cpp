#include "Circulo.h"

using namespace std;

string Circulo::centerString(string input, int width) {
    int spaces = (width - input.length()) / 2;
    string mid = string(spaces, ' ') + input;
    return mid + string((width - mid.length()), ' ');
}

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
    while (getline(ArchivoCirculo, line)) {

        regex e("\\b(IIrII)");
        string output = regex_replace(line, e, centerString(to_string(r), 5));
        regex e1("\\b(III3.14\\*rIII)");
        output = regex_replace(output, e1, centerString(to_string(3.14 * r), 12));
        regex e2("\\b(IIperimetroII)");
        output = regex_replace(output, e2, centerString(to_string(2 * 3.14 * r), 17));
        
        regex e3("\\b(IIr\\*rII)");
        output = regex_replace(output, e3, centerString(to_string(r * r), 7));
        regex e4("\\b(IIareaII)");
        output = regex_replace(output, e4, centerString(to_string(3.14 * r * r), 15));
        cout << output << endl;
    }
}