#include "Peon.h"
#include <cmath>

// Constructor del Peon
Peon::Peon(char color, int fila, int columna)
    : _color(color), _fila(fila), _columna(columna){}


// Verificar si un movimiento es válido 
bool Peon::esMovimientoValido(int nuevaFila, int nuevaColumna) const
{
    // Si el movimiento es de avance
    if (nuevaColumna == _columna) {
        int direccion;
    if (_color == 'B') {
    direccion = 1; // Si el peón es blanco, la dirección es hacia abajo
    } 
    else {
    direccion = -1; // Si el peón es negro, la dirección es hacia arriba
    }
 
    int distancia = std::abs(nuevaFila - _fila); // Si está en su posición inicial, se mueve dos casillas 
    if (_fila == 1 && _color == 'B' && distancia <= 2) {
    return true;
    }
    else if (_fila == 6 && _color == 'N' && distancia <= 2) {
    return true;
    }
    
    else if (distancia == 1) { // Si no está en su posición inicial, se mueve una casilla
        return true;
    }
    }

    // Si el movimiento es para comer una pieza en diagonal
    else if (std::abs(nuevaColumna - _columna) == 1 && std::abs(nuevaFila - _fila) == 1) {
        int direccion;
        if (_color == 'B') {
        direccion = 1; // Si el peón es blanco, la dirección es hacia abajo
        }
         else {
        direccion = -1; // Si el peón es negro, la dirección es hacia arriba
        }

        // La pieza que el peón come siempre estará adelante y en diagonal en la fila correspondiente a la dirección del peón
        if (nuevaFila == _fila + direccion) {
            return true;
        }
    }
    return false; // Si el movimiento no es válido
}

// Mover el peón a una nueva posición
void Peon::mover(int nuevaFila, int nuevaColumna)
{
    _fila = nuevaFila;
    _columna = nuevaColumna;
}
