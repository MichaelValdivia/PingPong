//
// Created by PERSONAL on 28/04/2020.
//

#ifndef PINGPONG_PANTALLAFINAL_H
#define PINGPONG_PANTALLAFINAL_H
#include "Pantalla.h"

class PantallaFinal: public Pantalla {
public:
    PantallaFinal(int px, int py, int plargo, int paltura,int pscore, sf::RenderWindow* w,sf::Time* elapsedTime,sf::Font* font);
    void dibujar() override;
    void eventos() override;
    void actualizar_mensaje();
};


#endif //PINGPONG_PANTALLAFINAL_H
