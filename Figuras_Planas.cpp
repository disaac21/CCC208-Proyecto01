//#include <iostream>
#include <string>
#include <vector>
#include "Funciones.h"
//using namespace std;

int main(int argc, char *argv[]) {
    vector<string> parametros;
    for (int i = 0; i < argc; i++)
        parametros.push_back(argv[i]);
    Funciones f; f.SwitchFiguras(parametros);
    getchar();
}