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
    while (getline(ArchivoTrapecio, line)) {
        regex ea("\\b(IIaII)");
        string output = regex_replace(line, ea, centerString(to_string(a), 5));
        regex eb("\\b(IIbII)");
        output = regex_replace(output, eb, centerString(to_string(b), 5));
        regex ec("\\b(IIcII)");
        output = regex_replace(output, ec, centerString(to_string(c), 5));
        regex eh("\\b(IIhII)");
        output = regex_replace(output, eh, centerString(to_string(h), 5));
        regex eB("\\b(IIBII)");
        output = regex_replace(output, eB, centerString(to_string(B), 5));

        regex emidP1("\\b(IIB\\+bII)");
        output = regex_replace(output, emidP1, centerString(to_string(B+b), 7));
        regex emidP2("\\b(IIa\\+cII)");
        output = regex_replace(output, emidP2, centerString(to_string(a+c), 7));
        regex ePeri("\\b(IIperimetroII)");
        output = regex_replace(output, ePeri, centerString(to_string(B+b+a+c), 26));

        regex emidA1("\\b(IIIB\\+bIII)");
        output = regex_replace(output, emidA1, centerString(to_string(B+b), 9));
        regex emidA2("\\b(IIIB\\+b\\*hIII)");
        output = regex_replace(output, emidA2, centerString(to_string((B+b)*h), 11));
        regex eArea("\\b(IIareaII)");
        output = regex_replace(output, eArea, centerString(to_string(((B+b)*h)/2), 25));

        cout << output << endl;
    }
}
string Trapecio::centerString(string input, int width) {
    int spaces = (width - input.length()) / 2;
    string mid = string(spaces, ' ') + input;
    return mid + string((width - mid.length()), ' ');
}
