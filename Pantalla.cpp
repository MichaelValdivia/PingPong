//
// Created by PERSONAL on 28/04/2020.
//

#include "Pantalla.h"

Pantalla::Pantalla(int px, int py, int plargo, int paltura, int pscore,sf::RenderWindow *w,sf::Time* elapsedTime, sf::Font* font) {
    pos_x = px;
    pos_y = py;
    largo = plargo;
    altura = paltura;
    window = w;
    fuente = font;
    score = pscore;
    tiempo = elapsedTime;
    //configurar largo o altura de acuerdo a requerimientos del juego (opcion default)
}

void Pantalla::set_posicion(int x, int y) {
  pos_x = x;
  pos_y = y;
}

void Pantalla::set_LargoxAlto(int l, int a) {
  largo = l;
  altura = a;
}
