#include "Pantalla_inicio.h"
#include <iostream>
#include "ETSIDI.h"

using namespace std;

void Pantalla_inicio::dibuja()
{
    gluLookAt(x_ojo, y_ojo, z_ojo,
        0.0, y_ojo, 0.0, //NOTESE QUE HEMOS CAMBIADO ESTO
        0.0, 1.0, 0.0); //PARA MIRAR AL CENTRO DE LA ESCENA

    //dibujo del fondo
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/KnightsTemplarPlayingChess1283.png").id);
    glDisable(GL_LIGHTING);
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glTexCoord2d(0, 1); glVertex3f(-24, -24, 0);
    glTexCoord2d(1, 1); glVertex3f(24, -24, 0);
    glTexCoord2d(1, 0); glVertex3f(24, 24, 0);
    glTexCoord2d(0, 0); glVertex3f(-24, 24, 0);
    glEnd();
    glEnable(GL_LIGHTING);
    glDisable(GL_TEXTURE_2D);
}

void Pantalla_inicio::setPos(float x1, float y1, float x2, float y2) {
    limite1.x = x1;
    limite1.y = y1;
    limite2.x = x2;
    limite2.y = y2;
}

void Pantalla_inicio::setColor(unsigned char r, unsigned char g, unsigned char b) {
    rojo = r;
    verde = g;
    azul = b;
}

void Pantalla_inicio::inicializa()
{
    x_ojo = 0;
    y_ojo = 0;
    z_ojo = 70;
}

void Pantalla_inicio::asign_tecla(unsigned char t)
{
    tecla = t;
}




