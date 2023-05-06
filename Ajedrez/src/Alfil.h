#pragma once
#include "Pieza.h"
#include "freeglut.h"

class Alfil :public Pieza {
public:
	Alfil(int columna, int fila, char color, char identificador) :Pieza(columna, fila, color, identificador) {}
	void dibuja(int* pieza_seleccionadaX, int* pieza_seleccionadaY);
};