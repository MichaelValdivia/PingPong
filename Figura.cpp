//
// Created by PERSONAL on 28/04/2020.
//

#include "Figura.h"

Figura::Figura(sf::RenderWindow* w){
    pos_x = 0;
    pos_y = 0;
    des_x = 0;
    des_y = 0;
    window = w;
}

void Figura::set_posicion(int px, int py) {
    pos_x = px;
    pos_y = py;
}
