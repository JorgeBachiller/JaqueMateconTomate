#include "Peon.h"
#include <cmath>
#include "ETSIDI.h"


//
//Peon::Peon(char color, int fila, int columna)
//{
//}
//
//// Verificar si un movimiento es válido 
//bool Peon::esMovimientoValido(int nuevaFila, int nuevaColumna) const
//{
//    // Si el movimiento es de avance
//    if (nuevaColumna == columna) {
//        int direccion;
//        if (color == 'B') {
//            direccion = 1; // Si el peón es blanco, la dirección es hacia abajo
//        }
//        else {
//            direccion = -1; // Si el peón es negro, la dirección es hacia arriba
//        }
//
//        int distancia = std::abs(nuevaFila - fila); // Si está en su posición inicial, se mueve dos casillas 
//        if (fila == 1 && color == 'B' && distancia <= 2) {
//            return true;
//        }
//        else if (fila == 6 && color == 'N' && distancia <= 2) {
//            return true;
//        }
//
//        else if (distancia == 1) { // Si no está en su posición inicial, se mueve una casilla
//            return true;
//        }
//    }
//
//    // Si el movimiento es para comer una pieza en diagonal
//    else if (std::abs(nuevaColumna - columna) == 1 && std::abs(nuevaFila - fila) == 1) {
//        int direccion;
//        if (color == 'B') {
//            direccion = 1; // Si el peón es blanco, la dirección es hacia abajo
//        }
//        else {
//            direccion = -1; // Si el peón es negro, la dirección es hacia arriba
//        }
//
//        // La pieza que el peón come siempre estará adelante y en diagonal en la fila correspondiente a la dirección del peón
//        if (nuevaFila == fila + direccion) {
//            return true;
//        }
//    }
//    return false; // Si el movimiento no es válido
//}
//
//// Mover el peón a una nueva posición
//void Peon::mover(int nuevaFila, int nuevaColumna)
//{
//    fila = nuevaFila;
//    columna = nuevaColumna;
//}
//
//void Peon::dibuja() {
//    //peones blancos
//    int i = 2;
//    int n = 0;
//    while (n < 8) {
//        glEnable(GL_TEXTURE_2D);
//        glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/peonb.png").id);
//        glTranslatef(-18.5 + 3 * n, -13.0, 0.0);
//        glDisable(GL_LIGHTING);
//        glBegin(GL_POLYGON);
//        glColor3f(1, 1, 1);
//        glTexCoord2d(0, 1); glVertex3f(-i, -i, 1);
//        glTexCoord2d(1, 1); glVertex3f(i, -i, 1);
//        glTexCoord2d(1, 0); glVertex3f(i, i, 1);
//        glTexCoord2d(0, 0); glVertex3f(-i, i, 1);
//        glEnd();
//        glEnable(GL_LIGHTING);
//        glDisable(GL_TEXTURE_2D);
//        n++;
//    }
//}

void Peon::dibuja(int* pieza_seleccionadaX, int* pieza_seleccionadaY)
{
	Pieza::dibuja("imagenes/P_B_C.png", "imagenes/P_B_O.png", "imagenes/P_N_C.png", "imagenes/P_N_O.png", "imagenes/peonb.png", "imagenes/peonn.png", pieza_seleccionadaX, pieza_seleccionadaY);
}
