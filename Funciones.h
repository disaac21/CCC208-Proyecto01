#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include <windows.h>
#include "Circulo.h"
#include "Cometa.h"
#include "Cuadrado.h"
#include "Paralelogramo.h"
#include "Rectangulo.h"
#include "Rombo.h"
#include "Trapecio.h"
#include "Triangulo.h"

using namespace std;

//Declaracion -----------------------------------------------------
void MainFunciones(int argc, char* argv[]);
void MensajeError();
int SwitchFiguras(int argc, char* argv[]);

//Definicion ------------------------------------------------------
void MainFunciones(int argc, char* argv[]) { //argc y argv siguen la misma logica mencionada anteriormente, argc(# de argumentos) y argv(array de strings)
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    if (argc <= 2) {
        MensajeError();
    }else {
        cout << endl;
        SwitchFiguras(argc, argv);
    }
}

/*
COMENTARIO A TENER EN CUENTA - EXTRAIDO DEL PDF
Por cada figura se debe crear una clase con su respectivo .h y .cpp, misma que se
instanciera en alguna función del archivo de funciones.

La implementacion de la gráfica debe estar en un metodo llamado Dibujar en la clase,

TAMBIÉN: Revisar Referencias
*/

int SwitchFiguras(int argc, char* argv[]) {
    string figura = argv[1]; //Pasamos los argumentos a string para poder comparar con const strings con facilidad

    if (figura == "triangulo") {
        if (argc == 6) {
            Triangulo triangulo(stoi(argv[2]), stoi(argv[3]), stoi(argv[4]), stoi(argv[5])); //stoi() convierte strings a int
            triangulo.Dibujar(); //Llama a la funcion Dibujar() de la clase
        }
        else {
            MensajeError();
        }

        return 1; //return para que finalice la funcion en dicho lugar
    }

    if (figura == "paralelogramo") {
        if (argc == 5) {
            Paralelogramo paralelogramo(stoi(argv[2]), stoi(argv[3]), stoi(argv[4]));
            paralelogramo.Dibujar();
        }
        else {
            MensajeError();
        }

        return 1;
    }

    if (figura == "rectangulo") {
        if (argc == 4) {
            Rectangulo rectangulo(stoi(argv[2]), stoi(argv[3]));
            rectangulo.Dibujar();
        }
        else {
            MensajeError();
        }

        return 1;
    }

    if (figura == "cuadrado") {
        if (argc == 3) {
            Cuadrado cuadrado(stoi(argv[2]));
            cuadrado.Dibujar();
        }
        else {
            MensajeError();
        }

        return 1;
    }

    if (figura == "rombo") {
        if (argc == 5) {
            Rombo rombo(stoi(argv[2]), stoi(argv[3]), stoi(argv[4]));
            rombo.Dibujar();
        }
        else {
            MensajeError();
        }

        return 1;
    }

    if (figura == "cometa") {
        if (argc == 6) {
            Cometa cometa(stoi(argv[2]), stoi(argv[3]), stoi(argv[4]), stoi(argv[5]));
            cometa.Dibujar();
        }
        else {
            MensajeError();
        }

        return 1;
    }

    if (figura == "trapecio") {
        if (argc == 7) {
            Trapecio trapecio(stoi(argv[2]), stoi(argv[3]), stoi(argv[4]), stoi(argv[5]), stoi(argv[6]));
            trapecio.Dibujar();
        }
        else {
            MensajeError();
        }

        return 1;
    }

    if (figura == "circulo") {
        if (argc == 3) {
            Circulo circulo(stoi(argv[2]));
            circulo.Dibujar();
        }
        else {
            MensajeError();
        }

        return 1;
    }

    MensajeError(); //Si no se cumple ninguno de los if se manda error, asi se abarcan todos los casos de error
    return 0;
};

void MensajeError() {
    ifstream ArchivoNoParametros("NoParametros.txt", ios::in);

    if (!ArchivoNoParametros) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    } //Se verifica si se abrio correctamente el archivo

    string line;
    while (getline(ArchivoNoParametros, line))
        cout << line << endl;
}