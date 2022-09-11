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
        MensajeError();
    else {
        cout << endl;
        CargarArchivo(Parametros);
    }
}

/*
COMENTARIO A TENER EN CUENTA - EXTRAIDO DEL PDF
Por cada figura se debe crear una clase con su respectivo .h y .cpp, misma que se
instanciera en alguna función del archivo de funciones.

La implementacion de la gráfica debe estar en un metodo llamado Dibujar en la clase,

TAMBIÉN: Revisar Referencias
*/

void Funciones::MensajeError() {
    ifstream ArchivoNoParametros("NoParametros.txt", ios::in);
    string line;
    while (getline(ArchivoNoParametros, line))
        cout << line << endl;
}

void Funciones::CargarArchivo(vector<string>Parametros){
    if (Parametros[1] == "triangulo")
        if (Parametros.size() == 6) {
            ifstream ArchivoTriangulo("Triangulo.txt", ios::in);
            string line;
            while (getline(ArchivoTriangulo, line))
                cout << line << endl;
        } else
            MensajeError();

    if (Parametros[1] == "paralelogramo")
        if (Parametros.size() == 5) {
            ifstream ArchivoParalelogramo("Paralelogramo.txt", ios::in);
            string line;
            while (getline(ArchivoParalelogramo, line))
                cout << line << endl;
        } else
            MensajeError();

    if (Parametros[1] == "rectangulo")
        if (Parametros.size() == 4) {
            ifstream ArchivoRectangulo("Rectangulo.txt", ios::in);
            string line;
            while (getline(ArchivoRectangulo, line))
                cout << line << endl;
        } else
            MensajeError();

    if (Parametros[1] == "cuadrado") {
        if (Parametros.size() == 3) {
            ifstream ArchivoCuadrado("Cuadrado.txt", ios::in);
            string line;
            while (getline(ArchivoCuadrado, line))
                cout << line << endl;
        } else
            MensajeError();
    }

    if (Parametros[1] == "rombo")
        if (Parametros.size() == 5) {
            ifstream ArchivoRombo("Rombo.txt", ios::in);
            string line;
            while (getline(ArchivoRombo, line))
                cout << line << endl;
        } else
            MensajeError();

    if (Parametros[1] == "cometa")
        if (Parametros.size() == 6) {
            ifstream ArchivoCometa("Cometa.txt", ios::in);
            string line;
            while (getline(ArchivoCometa, line))
                cout << line << endl;
        } else
            MensajeError();

    if (Parametros[1] == "trapecio")
        if (Parametros.size() == 7) {
            ifstream ArchivoTrapecio("Trapecio.txt", ios::in);
            string line;
            while (getline(ArchivoTrapecio, line))
                cout << line << endl;
        } else
            MensajeError();

    if (Parametros[1] == "circulo")
        if (Parametros.size() == 3) {
            ifstream ArchivoCirculo("Circulo.txt", ios::in);
            string line;
            while (getline(ArchivoCirculo, line))
                cout << line << endl;
        } else
            MensajeError();
};