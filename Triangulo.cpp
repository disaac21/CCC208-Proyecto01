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
    }

    string line;
    while (getline(ArchivoTriangulo, line)) {
        regex ea("\\b(IIaII)");
        string output = regex_replace(line, ea, centerString(to_string(a), 5));
        regex eb("\\b(IIbII)");
        output = regex_replace(output, eb, centerString(to_string(b), 5));
        regex ec("\\b(IIcII)");
        output = regex_replace(output, ec, centerString(to_string(c), 5));
        regex eh("\\b(IIhII)");
        output = regex_replace(output, eh, centerString(to_string(h), 5));

        regex emidP("\\b(IIb\\+cII)");
        output = regex_replace(output, emidP, centerString(to_string(b+c), 7));
        regex ePeri("\\b(IIperimetroII)");
        output = regex_replace(output, ePeri, centerString(to_string(a+b+c), 17));

        regex emidA("\\b(IIb\\*hII)");
        output = regex_replace(output, emidA, centerString(to_string(b*h), 7));
        regex eArea("\\b(IIareaII)");
        output = regex_replace(output, eArea, centerString(to_string(b*h/2), 15));

        cout << output << endl;
    }
}

string Triangulo::centerString(string input, int width) {
    int spaces = (width - input.length()) / 2;
    string mid = string(spaces, ' ') + input;
    return mid + string((width - mid.length()), ' ');
}
