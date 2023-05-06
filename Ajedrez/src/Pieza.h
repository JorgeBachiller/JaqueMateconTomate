#pragma once
#include "ETSIDI.h"
#include "freeglut.h"

class Pieza {
protected:
    const char color; // Atributo de color  (diferenciar piezas blancas y negras)
    int fila; // Atributo de la fila 
    int columna; // Atributo de la columna 
    const char identificador; // K para el rey, Q para la reina, A para el alfil, C para el caballo, T para la torre, P para el peon

public:

    Pieza(int columna, int fila, char color, char identificador) : columna(columna), fila(fila), color(color), identificador(identificador) {}
    void dibuja(const char foto1[], const char foto2[], const char foto3[], const char foto4[], const char foto5[], const char foto6[], int* pieza_seleccionadaX, int* pieza_seleccionadaY);
    void setFila(int x);
    void setColumna(int y);
    char getColor(); // Obtener el color 
    char getIdentificador();//Obtener identificador de pieza
    int getFila(); // Obtener la fila 
    int getColumna(); // Obtener la columna 

    bool MovimientoValido(int fila, int columna); // Verificar si un movimiento es válido
    void mover(int fila, int columna); // Mover a la posición


};