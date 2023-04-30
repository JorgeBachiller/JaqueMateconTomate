#pragma once
#include "freeglut.h"
#include "Vector2D.h"

class Tablero {
private:
	unsigned char rojo, verde, azul;
	
public:
	Vector2D limite1;
	Vector2D limite2;
	void dibuja();
};