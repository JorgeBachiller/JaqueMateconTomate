#include "Reina.h"

void Reina::dibuja(int* pieza_seleccionadaX, int* pieza_seleccionadaY)
{
	Pieza::dibuja("imagenes/Q_B_C.png", "imagenes/Q_B_O.png", "imagenes/Q_N_C.png", "imagenes/Q_N_O.png", "imagenes/reinab.png", "imagenes/reinan.png", pieza_seleccionadaX, pieza_seleccionadaY);
}
