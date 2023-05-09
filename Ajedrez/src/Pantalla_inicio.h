#pragma once
#include "freeglut.h"
#include "Vector2D.h"


class Pantalla_inicio
{
private:
	unsigned char rojo, verde, azul;
	unsigned char tecla;

public:
	Vector2D limite1;
	Vector2D limite2;
	float x_ojo, y_ojo, z_ojo;

	void dibuja();
	void setPos(float x1, float y1, float x2, float y2);
	void setColor(unsigned char r, unsigned char g, unsigned char b);

	void inicializa();
	void asign_tecla(unsigned char t);
	void avanza(unsigned char t);

};

