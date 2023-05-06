#include "Peon.h"
#include <cmath>
#include "ETSIDI.h"


//
//Peon::Peon(char color, int fila, int columna)
//{
//}
//
//// Verificar si un movimiento es v�lido 
//bool Peon::esMovimientoValido(int nuevaFila, int nuevaColumna) const
//{
//    // Si el movimiento es de avance
//    if (nuevaColumna == columna) {
//        int direccion;
//        if (color == 'B') {
//            direccion = 1; // Si el pe�n es blanco, la direcci�n es hacia abajo
//        }
//        else {
//            direccion = -1; // Si el pe�n es negro, la direcci�n es hacia arriba
//        }
//
//        int distancia = std::abs(nuevaFila - fila); // Si est� en su posici�n inicial, se mueve dos casillas 
//        if (fila == 1 && color == 'B' && distancia <= 2) {
//            return true;
//        }
//        else if (fila == 6 && color == 'N' && distancia <= 2) {
//            return true;
//        }
//
//        else if (distancia == 1) { // Si no est� en su posici�n inicial, se mueve una casilla
//            return true;
//        }
//    }
//
//    // Si el movimiento es para comer una pieza en diagonal
//    else if (std::abs(nuevaColumna - columna) == 1 && std::abs(nuevaFila - fila) == 1) {
//        int direccion;
//        if (color == 'B') {
//            direccion = 1; // Si el pe�n es blanco, la direcci�n es hacia abajo
//        }
//        else {
//            direccion = -1; // Si el pe�n es negro, la direcci�n es hacia arriba
//        }
//
//        // La pieza que el pe�n come siempre estar� adelante y en diagonal en la fila correspondiente a la direcci�n del pe�n
//        if (nuevaFila == fila + direccion) {
//            return true;
//        }
//    }
//    return false; // Si el movimiento no es v�lido
//}
//
//// Mover el pe�n a una nueva posici�n
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
