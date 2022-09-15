#include "Rectangulo.h"

using namespace std;

Rectangulo::Rectangulo(int a, int b) {
    this->a = a;
    this->b = b;
}
Rectangulo::~Rectangulo(){

}

int Rectangulo::geta() const {
    return a;
}
int Rectangulo::getb() const {
    return b;
}

void Rectangulo::seta(int a){
    this->a = a;
}
void Rectangulo::setb(int b){
    this->b = b;
}

void Rectangulo::Dibujar() {
    ifstream ArchivoRectangulo("Rectangulo.txt", ios::in);

    if (!ArchivoRectangulo) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }

    string line;
    while (getline(ArchivoRectangulo, line)) {
        regex ea("\\b(IIaII)");
        string output = regex_replace(line, ea, centerString(to_string(a), 5));
        regex eb("\\b(IIbII)");
        output = regex_replace(output, eb, centerString(to_string(b), 5));

        regex eArea("\\b(IIareaII)");
        output = regex_replace(output, eArea, centerString(to_string(b*a), 15));
        regex ePeri("\\b(IIperimetroII)");
        output = regex_replace(output, ePeri, centerString(to_string(2*(b+a)), 17));
        regex emidP("\\b(IIIb\\+aIII)");
        output = regex_replace(output, emidP, centerString(to_string(b+a), 9));
        
        cout << output << endl;
    }
}

string Rectangulo::centerString(string input, int width) {
    int spaces = (width - input.length()) / 2;
    string mid = string(spaces, ' ') + input;
    return mid + string((width - mid.length()), ' ');
}