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
    while (getline(ArchivoRombo, line)) {
        regex ea("\\b(IIaII)");
        string output = regex_replace(line, ea, centerString(to_string(a), 5));
        regex ed("\\b(IIdII)");
        output = regex_replace(output, ed, centerString(to_string(d), 5));
        regex eD("\\b(IIDII)");
        output = regex_replace(output, eD, centerString(to_string(D), 5));

        regex eArea("\\b(IIareaII)");
        output = regex_replace(output, eArea, centerString(to_string(D*d/2), 15));
        regex ePeri("\\b(IIperimetroII)");
        output = regex_replace(output, ePeri, centerString(to_string(4*a), 17));
        regex emidA("\\b(IIID\\*dIII)");
        output = regex_replace(output, emidA, centerString(to_string(D*d), 9));

        cout << output << endl;
    }
}

string Rombo::centerString(string input, int width) {
    int spaces = (width - input.length()) / 2;
    string mid = string(spaces, ' ') + input;
    return mid + string((width - mid.length()), ' ');
}