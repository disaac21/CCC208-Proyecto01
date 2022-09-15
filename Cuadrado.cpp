#include "Cuadrado.h"

using namespace std;

string Cuadrado::centerString(string input, int width) {
    int spaces = (width - input.length()) / 2;
    string mid = string(spaces, ' ') + input;
    return mid + string((width-mid.length()), ' ');
}

Cuadrado::Cuadrado(int a) {
    this->a = a;
}
Cuadrado::~Cuadrado(){

}

int Cuadrado::geta() const {
    return a;
}

void Cuadrado::seta(int a){
    this->a = a;
}

void Cuadrado::Dibujar() {
    ifstream ArchivoCuadrado("Cuadrado.txt", ios::in);

    if (!ArchivoCuadrado) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    string remp = centerString(to_string(a), 5);
    string line;
    while (getline(ArchivoCuadrado, line)) {
        regex e("\\b(IIaII)([^ ]*)");
        string output = regex_replace(line, e, remp);
        regex e2("\\b(IIperimetroII)");
        output = regex_replace(output, e2, centerString(to_string(4*a), 17));
        regex e3("\\b(IIareaII)");
        output = regex_replace(output, e3, centerString(to_string(a*a), 15));
        cout << output << endl;
        
    }
}
