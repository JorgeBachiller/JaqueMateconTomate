#include "Torre.h"

void Torre::dibuja(int* pieza_seleccionadaX, int* pieza_seleccionadaY)
{
	Pieza::dibuja("imagenes/T_B_C.png", "imagenes/T_B_O.png", "imagenes/T_N_C.png", "imagenes/T_N_O.png", "imagenes/torreb.png", "imagenes/torren.png", pieza_seleccionadaX, pieza_seleccionadaY);
}
