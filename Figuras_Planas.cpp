#include "Funciones.h" //include de archivo header con todas las funciones, Funciones.h no es una clase, es un archivo con funciones adentro

int main(int argc, char *argv[]) {
    SwitchFiguras(argc, argv); //SwitchFiguras es una funcion de Funciones.h, agarra como parametros a argc(# de argumentos) y argv(array de strings)
}

/*
Anteriormente Funciones.h trabajaba como objeto,
ahora que simplemente es un archivo con funciones,
solo hace falta incluirlo y seremos capaces de utilizar libremente sus funciones.

Anteriormente teniamos tambien un vector con los parametros,
esto lo descartamos arrastrando directamente su array de argumentos.
Esto cambia la forma en que se manejan los datos(es posible notarlo al seguir viendo el programa),
sin embargo, la logica del programa es la misma.
*/