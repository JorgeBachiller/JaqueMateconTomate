#pragma once
#include "freeglut.h"
#include "Vector2D.h"

#include "Alfil.h"
#include "Caballo.h"
#include "Peon.h"
#include "Reina.h"
#include "Rey.h"
#include "Torre.h"


class Tablero {

	Reina reina_n, reina_b;
	Rey rey_n, rey_b;
private:
	unsigned char rojo, verde, azul;

public:
	Vector2D limite1;
	Vector2D limite2;
	float x_ojo, y_ojo, z_ojo;

	void dibuja();
	void setPos(float x1, float y1, float x2, float y2);
	void setColor(unsigned char r, unsigned char g, unsigned char b);

	void inicializa();
};