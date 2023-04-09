class Peon {
private:
    char _color; // Atributo de color del peón ('B' para blanco, 'N' para negro)
    int _fila; // Atributo de la fila actual 
    int _columna; // Atributo de la columna actual 
public:
    Peon(char color, int fila, int columna); // Constructor con argumento de color, fila y columna

    char obtenerColor() const; // Obtener el color 
    int obtenerFila() const; // Obtener la fila actual
    int obtenerColumna() const; // Obtener la columna actual 

    bool esMovimientoValido(int fila, int columna) const; // Verificar si un movimiento es válido
    void mover(int fila, int columna); // Mover el peón a la posición
};
