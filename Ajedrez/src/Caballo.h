#pragma once
#include "Pieza.h"
#include "freeglut.h"

class Caballo :public Pieza {
public:
	Caballo(int columna, int fila, char color, char identificador) :Pieza(columna, fila, color, identificador) {}
	void dibuja(int* pieza_seleccionadaX, int* pieza_seleccionadaY);
};
