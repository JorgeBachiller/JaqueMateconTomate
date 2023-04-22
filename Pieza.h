class Pieza {
private:
    char color; // Atributo de color  ('B' para blanco, 'N' para negro)
    int fila; // Atributo de la fila 
    int columna; // Atributo de la columna 
public:
    Peon(char color, int fila, int columna); // Constructor con argumento de color, fila y columna

    char obtenerColor() const; // Obtener el color 
    int obtenerFila() const; // Obtener la fila 
    int obtenerColumna() const; // Obtener la columna 

    bool MovimientoValido(int fila, int columna) const; // Verificar si un movimiento es válido
    void mover(int fila, int columna); // Mover a la posición
};
