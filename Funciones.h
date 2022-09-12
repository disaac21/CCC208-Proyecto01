#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <windows.h>

using namespace std;

//Declaracion -----------------------------------------------------
//void mainPrima(); Idea de funcion en espera...
void SwitchFiguras(int argc, char* argv[]);
void MensajeError();
int CargarArchivo(int argc, char* argv[]);

//Definicion ------------------------------------------------------
void SwitchFiguras(int argc, char* argv[]) { //argc y argv siguen la misma logica mencionada anteriormente, argc(# de argumentos) y argv(array de strings)
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    if (argc <= 2) {
        MensajeError();
    }else {
        cout << endl;
        CargarArchivo(argc, argv);
    }
}

/*
COMENTARIO A TENER EN CUENTA - EXTRAIDO DEL PDF
Por cada figura se debe crear una clase con su respectivo .h y .cpp, misma que se
instanciera en alguna función del archivo de funciones.

La implementacion de la gráfica debe estar en un metodo llamado Dibujar en la clase,

TAMBIÉN: Revisar Referencias
*/

int CargarArchivo(int argc, char* argv[]) {
    string figura = argv[1]; //Pasamos los argumentos a string para poder comparar con const strings con facilidad

    if (figura == "triangulo") {
        if (argc == 6) {
            ifstream ArchivoTriangulo("Triangulo.txt", ios::in);

            if (!ArchivoTriangulo) {
                cerr << "No se pudo abrir el archivo" << endl;
                exit(EXIT_FAILURE);
            } //Se verifica si el archivo se abrio correctamente

            string line;
            while (getline(ArchivoTriangulo, line))
                cout << line << endl; //Se lee el archivo linea por linea
        }
        else {
            MensajeError();
        }
    }

    if (figura == "paralelogramo") {
        if (argc == 5) {
            ifstream ArchivoParalelogramo("Paralelogramo.txt", ios::in);

            if (!ArchivoParalelogramo) {
                cerr << "No se pudo abrir el archivo" << endl;
                exit(EXIT_FAILURE);
            }

            string line;
            while (getline(ArchivoParalelogramo, line))
                cout << line << endl;
        }
        else {
            MensajeError();
        }
    }

    if (figura == "rectangulo") {
        if (argc == 4) {
            ifstream ArchivoRectangulo("Rectangulo.txt", ios::in);

            if (!ArchivoRectangulo) {
                cerr << "No se pudo abrir el archivo" << endl;
                exit(EXIT_FAILURE);
            }

            string line;
            while (getline(ArchivoRectangulo, line))
                cout << line << endl;
        }
        else {
            MensajeError();
        }
    }

    if (figura == "cuadrado") {
        if (argc == 3) {
            ifstream ArchivoCuadrado("Cuadrado.txt", ios::in);

            if (!ArchivoCuadrado) {
                cerr << "No se pudo abrir el archivo" << endl;
                exit(EXIT_FAILURE);
            }

            string line;
            while (getline(ArchivoCuadrado, line))
                cout << line << endl;
        }
        else {
            MensajeError();
        }
    }

    if (figura == "rombo") {
        if (argc == 5) {
            ifstream ArchivoRombo("Rombo.txt", ios::in);

            if (!ArchivoRombo) {
                cerr << "No se pudo abrir el archivo" << endl;
                exit(EXIT_FAILURE);
            }

            string line;
            while (getline(ArchivoRombo, line))
                cout << line << endl;
        }
        else {
            MensajeError();
        }
    }

    if (figura == "cometa") {
        if (argc == 6) {
            ifstream ArchivoCometa("Cometa.txt", ios::in);

            if (!ArchivoCometa) {
                cerr << "No se pudo abrir el archivo" << endl;
                exit(EXIT_FAILURE);
            }

            string line;
            while (getline(ArchivoCometa, line))
                cout << line << endl;
        }
        else {
            MensajeError();
        }
    }

    if (figura == "trapecio") {
        if (argc == 7) {
            ifstream ArchivoTrapecio("Trapecio.txt", ios::in);

            if (!ArchivoTrapecio) {
                cerr << "No se pudo abrir el archivo" << endl;
                exit(EXIT_FAILURE);
            }

            string line;
            while (getline(ArchivoTrapecio, line))
                cout << line << endl;
        }
        else {
            MensajeError();
        }
    }

    if (figura == "circulo") {
        if (argc == 3) {
            ifstream ArchivoCirculo("Circulo.txt", ios::in);

            if (!ArchivoCirculo) {
                cerr << "No se pudo abrir el archivo" << endl;
                exit(EXIT_FAILURE);
            }

            string line;
            while (getline(ArchivoCirculo, line))
                cout << line << endl;
        }
        else {
            MensajeError();
        }
    }
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