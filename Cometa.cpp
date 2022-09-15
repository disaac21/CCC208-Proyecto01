#include "Cometa.h"

using namespace std;

Cometa::Cometa(int a, int b, int d, int D) {
    this->a = a;
    this->b = b;
    this->d = d;
    this->D = D;
}
Cometa::~Cometa(){

}

int Cometa::geta() const {
    return a;
}
int Cometa::getb() const {
    return b;
}
int Cometa::getd() const {
    return d;
}
int Cometa::getD() const {
    return D;
}

void Cometa::seta(int a){
    this->a = a;
}
void Cometa::setb(int b){
    this->b = b;
}
void Cometa::setd(int d){
    this->d = d;
}
void Cometa::setD(int D){
    this->D = D;
}

void Cometa::Dibujar() {
    ifstream ArchivoCometa("Cometa.txt", ios::in);

    if (!ArchivoCometa) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    string line;
    while (getline(ArchivoCometa, line)) {
        regex ea("\\b(IIaII)");
        string output = regex_replace(line, ea, centerString(to_string(a), 5));
        regex eb("\\b(IIbII)");
        output = regex_replace(output, eb, centerString(to_string(b), 5));
        regex ed("\\b(IIdII)");
        output = regex_replace(output, ed, centerString(to_string(d), 5));
        regex eD("\\b(IIDII)");
        output = regex_replace(output, eD, centerString(to_string(D), 5));

        regex emidP("\\b(IIIb\\+aIII)");
        output = regex_replace(output, emidP, centerString(to_string(b+a), 9));
        regex emidA("\\b(IID\\*dII)");
        output = regex_replace(output, emidA, centerString(to_string(D*d), 7));
        regex ePeri("\\b(IIperimetroooII)");
        output = regex_replace(output, ePeri, centerString(to_string(2*(b+a)), 17));
        regex eArea("\\b(IIarearespuII)");
        output = regex_replace(output, eArea, centerString(to_string(D*d/2.0), 15));

        cout << output << endl;
    }
}

string Cometa::centerString(string input, int width) {
    int spaces = (width - input.length()) / 2;
    string mid = string(spaces, ' ') + input;
    return mid + string((width - mid.length()), ' ');
}
