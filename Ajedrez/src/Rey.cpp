#include "Rey.h"

void Rey::dibuja(int* pieza_seleccionadaX, int* pieza_seleccionadaY)
{
	Pieza::dibuja("imagenes/K_B_C.png", "imagenes/K_B_O.png", "imagenes/K_N_C.png", "imagenes/K_N_O.png", "imagenes/reyb.png", "imagenes/reyn.png", pieza_seleccionadaX, pieza_seleccionadaY);
}
