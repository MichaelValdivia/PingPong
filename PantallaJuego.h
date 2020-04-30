//
// Created by PERSONAL on 28/04/2020.
//

#ifndef PINGPONG_PANTALLAJUEGO_H
#define PINGPONG_PANTALLAJUEGO_H
#include "Pantalla.h"
#include "Jugador.h"
#include "Pelota.h"

class PantallaJuego: public Pantalla {
private:
    bool isDibujado=0;
    Jugador* jugador1;
    Jugador* jugador2;
    Pelota* bolita;
public:

    PantallaJuego(int px, int py, int plargo, int paltura,int pscore, sf::RenderWindow* w,sf::Time* elapsedTime,sf::Font* font);
    void dibujar() override;
    void eventos() override;
    void dibujar_red();
    void actualizar_puntaje();
    void colision();
    int getScore();
    bool getIsDibujado();
};


#endif //PINGPONG_PANTALLAJUEGO_H
