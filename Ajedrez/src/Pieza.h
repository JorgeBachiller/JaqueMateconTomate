#pragma once
#include "freeglut.h"
class Pieza {
protected:
    char color; // Atributo de color  ('B' para blanco, 'N' para negro)
    int fila; // Atributo de la fila 
    int columna; // Atributo de la columna 
public:
    void dibuja();
    void setFila(int x);
    void setColumna(int y);
    char obtenerColor() const; // Obtener el color 
    int obtenerFila() const; // Obtener la fila 
    int obtenerColumna() const; // Obtener la columna 

    bool MovimientoValido(int fila, int columna) const; // Verificar si un movimiento es válido
    void mover(int fila, int columna); // Mover a la posición
};