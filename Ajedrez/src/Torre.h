#pragma once
#include "Pieza.h"
#include "freeglut.h"

class Torre :public Pieza {
public:
	Torre(int columna, int fila, char color, char identificador) :Pieza(columna, fila, color, identificador) {}
	void dibuja(int* pieza_seleccionadaX, int* pieza_seleccionadaY);
};