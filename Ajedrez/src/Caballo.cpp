#include "Caballo.h"

void Caballo::dibuja(int* pieza_seleccionadaX, int* pieza_seleccionadaY)
{
	Pieza::dibuja("imagenes/C_B_C.png", "imagenes/C_B_O.png", "imagenes/C_N_C.png", "imagenes/C_N_O.png", "imagenes/caballob.png", "imagenes/caballon.png", pieza_seleccionadaX, pieza_seleccionadaY);
}
