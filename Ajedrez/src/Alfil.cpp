#include "Alfil.h"


void Alfil::dibuja(int* pieza_seleccionadaX, int* pieza_seleccionadaY)
{
	Pieza::dibuja("imagenes/A_B_C.png", "imagenes/A_B_O.png", "imagenes/A_N_C.png", "imagenes/A_N_O.png", "imagenes/alfilb.png", "imagenes/alfiln.png", pieza_seleccionadaX, pieza_seleccionadaY);
}
