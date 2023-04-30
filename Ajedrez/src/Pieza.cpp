#include "Pieza.h"


void Pieza::dibuja()
{
}

void Pieza::setFila(int x)
{
	fila = x;
}

void Pieza::setColumna(int y)
{
	columna = y;
}

char Pieza::obtenerColor() const
{
	return color;
}

int Pieza::obtenerFila() const
{
	return fila;
}

int Pieza::obtenerColumna() const
{
	return columna;
}

bool Pieza::MovimientoValido(int fila, int columna) const
{
	return false;
}

void Pieza::mover(int fila, int columna)
{
}
