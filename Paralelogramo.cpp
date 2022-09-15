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
    while (getline(ArchivoParalelogramo, line)) {
        regex ea("\\b(IIaII)");
        string output = regex_replace(line, ea, centerString(to_string(a), 5));
        regex eh("\\b(IIhII)");
        output = regex_replace(output, eh, centerString(to_string(h), 5));
        regex eb("\\b(IIbII)");
        output = regex_replace(output, eb, centerString(to_string(b), 5));

        regex emidP("\\b(IIIa\\+bIII)");
        output = regex_replace(output, emidP, centerString(to_string(a+b), 9));
        regex eArea("\\b(IIareaII)");
        output = regex_replace(output, eArea, centerString(to_string(b*h), 15));
        regex ePeri("\\b(IIperimetroII)");
        output = regex_replace(output, ePeri, centerString(to_string(2*(a+b)), 17));
        
        cout << output << endl;
    }
}

string Paralelogramo::centerString(string input, int width) {
    int spaces = (width - input.length()) / 2;
    string mid = string(spaces, ' ') + input;
    return mid + string((width - mid.length()), ' ');
}

