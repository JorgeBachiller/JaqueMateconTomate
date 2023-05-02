#include "Peon.h"
#include <cmath>
#include "ETSIDI.h"



// Verificar si un movimiento es válido 
bool Peon::esMovimientoValido(int nuevaFila, int nuevaColumna) const
{
    // Si el movimiento es de avance
    if (nuevaColumna == columna) {
        int direccion;
        if (color == 'B') {
            direccion = 1; // Si el peón es blanco, la dirección es hacia abajo
        }
        else {
            direccion = -1; // Si el peón es negro, la dirección es hacia arriba
        }

        int distancia = std::abs(nuevaFila - fila); // Si está en su posición inicial, se mueve dos casillas 
        if (fila == 1 && color == 'B' && distancia <= 2) {
            return true;
        }
        else if (fila == 6 && color == 'N' && distancia <= 2) {
            return true;
        }

        else if (distancia == 1) { // Si no está en su posición inicial, se mueve una casilla
            return true;
        }
    }

    // Si el movimiento es para comer una pieza en diagonal
    else if (std::abs(nuevaColumna - columna) == 1 && std::abs(nuevaFila - fila) == 1) {
        int direccion;
        if (color == 'B') {
            direccion = 1; // Si el peón es blanco, la dirección es hacia abajo
        }
        else {
            direccion = -1; // Si el peón es negro, la dirección es hacia arriba
        }

        // La pieza que el peón come siempre estará adelante y en diagonal en la fila correspondiente a la dirección del peón
        if (nuevaFila == fila + direccion) {
            return true;
        }
    }
    return false; // Si el movimiento no es válido
}

// Mover el peón a una nueva posición
void Peon::mover(int nuevaFila, int nuevaColumna)
{
    fila = nuevaFila;
    columna = nuevaColumna;
}

