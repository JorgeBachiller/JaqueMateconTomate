#pragma once
#include "Pieza.h"
#include "freeglut.h"

class Peon :public Pieza {

	

	Peon(char color, int fila, int columna);

	bool esMovimientoValido(int nuevaFila, int nuevaColumna) const;

	void mover(int nuevaFila, int nuevaColumna);

};