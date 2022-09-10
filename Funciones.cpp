#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <windows.h>
#include "Funciones.h"
using namespace std;

Funciones::Funciones(){

}

void Funciones::SwitchFiguras(vector<string> Parametros) {

    //Este Bloque Solo Es Chequeo
    // cout << " --- Print Previo --- " << endl << "Parametros.size() = " << Parametros.size() << endl << "Parametros:" << endl;
    // for (int i = 0; i < Parametros.size(); i++)
    //     cout << i << " - " << Parametros[i] << endl;
    // cout << "\n --- Post Print --- " << endl;

    
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);


    if (Parametros.size() <= 2)
        MensajeError(Parametros);
    else {
        if (Parametros[1] == "triangulo")
            if (Parametros.size() == 6)
                cout << "Triangulo y Sus 4 Parametros";
            else
                MensajeError(Parametros);

        if (Parametros[1] == "paralelogramo")
            if (Parametros.size() == 5)
                cout << "Paralelogramo y Sus 3 Parametros";
            else
                MensajeError(Parametros);

        if (Parametros[1] == "rectangulo")
            if (Parametros.size() == 4)
                cout << "Rectangulo y Sus 2 Parametros";
            else
                MensajeError(Parametros);

        if (Parametros[1] == "cuadrado")
            if (Parametros.size() == 3)
                cout << "Cuadrado y Su Parametro";
            else
                MensajeError(Parametros);

        if (Parametros[1] == "rombo")
            if (Parametros.size() == 5)
                cout << "Rombo y Sus 3 Parametros";
            else
                MensajeError(Parametros);

        if (Parametros[1] == "cometa")
            if (Parametros.size() == 6)
                cout << "Cometa y Sus 4 Parametros";
            else
                MensajeError(Parametros);

        if (Parametros[1] == "trapecio")
            if (Parametros.size() == 7)
                cout << "Trapecio y Sus 5 Parametros";
            else
                MensajeError(Parametros);

        if (Parametros[1] == "circulo")
            if (Parametros.size() == 3)
                cout << "Circulo y Su Parametro";
            else
                MensajeError(Parametros);
    }
}

void Funciones::MensajeError(vector<string> Parametros) {
    ifstream ArchivoNoParametros("NoParametros.txt", ios::in);
    string line;
    while (getline(ArchivoNoParametros, line))
        cout << line << endl;
}