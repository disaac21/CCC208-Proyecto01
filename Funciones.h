#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Funciones {

    private:
        string ElegirFigura;

    public:
        Funciones();
        void SwitchFiguras(vector<string>);
        void MensajeError(vector<string>);

};