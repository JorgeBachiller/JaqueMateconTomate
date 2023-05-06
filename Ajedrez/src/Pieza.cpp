#include "Pieza.h"



void Pieza::dibuja(const char foto1[], const char foto2[], const char foto3[], const char foto4[], const char foto5[], const char foto6[], int* pieza_seleccionadaX, int* pieza_seleccionadaY)
{
    glEnable(GL_TEXTURE_2D);
    if (*pieza_seleccionadaX == columna && *pieza_seleccionadaY == fila)
    {
        if (color == 'w')
            glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture(foto5).id);
        if (color == 'b')
            glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture(foto6).id);
        glDisable(GL_LIGHTING);
        glBegin(GL_POLYGON);
        glColor3f(1, 1, 1);
        glTexCoord2d(0, 1);        glVertex3f(columna * 4 - 4, fila * 4 - 4, 0);
        glTexCoord2d(1, 1);        glVertex3f(columna * 4, fila * 4 - 4, 0);
        glTexCoord2d(1, 0);        glVertex3f(columna * 4, fila * 4, 0);
        glTexCoord2d(0, 0);        glVertex3f(columna * 4 - 4, fila * 4, 0);
        glEnd();
        glEnable(GL_LIGHTING);
        glDisable(GL_TEXTURE_2D);
        return;
    }

    for (int j = 1; j < 9; j++) {
        for (int i = 1; i < 9; i++) {
            if (columna == j && fila == i) {
                if (j % 2 == 1) {
                    if (i % 2 == 1) {
                        if (color == 'w')
                            glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture(foto2).id);
                        if (color == 'b')
                            glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture(foto4).id);
                    }
                    else {
                        if (color == 'w')
                            glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture(foto1).id);
                        if (color == 'b')
                            glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture(foto3).id);
                    }
                }
                else {
                    if (i % 2 == 0) {
                        if (color == 'w')
                            glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture(foto2).id);
                        if (color == 'b')
                            glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture(foto4).id);
                    }
                    else {
                        if (color == 'w')
                            glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture(foto1).id);
                        if (color == 'b')
                            glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture(foto3).id);
                    }

                }
                glDisable(GL_LIGHTING);
                glBegin(GL_POLYGON);
                glColor3f(1, 1, 1);
                glTexCoord2d(0, 1);        glVertex3f(columna * 4 - 4, fila * 4 - 4, 0);
                glTexCoord2d(1, 1);        glVertex3f(columna * 4, fila * 4 - 4, 0);
                glTexCoord2d(1, 0);        glVertex3f(columna * 4, fila * 4, 0);
                glTexCoord2d(0, 0);        glVertex3f(columna * 4 - 4, fila * 4, 0);
                glEnd();
            }
        }
    }
    glEnable(GL_LIGHTING);
    glDisable(GL_TEXTURE_2D);
}

void Pieza::setFila(int x)
{
	fila = x;
}

void Pieza::setColumna(int y)
{
	columna = y;
}

char Pieza::getColor() 
{
	return color;
}

char Pieza::getIdentificador()
{
	return identificador;
}

int Pieza::getFila() 
{
	return fila;
}

int Pieza::getColumna() 
{
	return columna;
}

bool Pieza::MovimientoValido(int fila, int columna) 
{
	return false;
}

void Pieza::mover(int fila, int columna)
{
}
