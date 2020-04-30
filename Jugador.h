//
// Created by PERSONAL on 28/04/2020.
//

#ifndef PINGPONG_JUGADOR_H
#define PINGPONG_JUGADOR_H
#include "Figura.h"

class Jugador: public Figura {
private:



public:
    int largo;
    int altura;
    int puntaje;
    float velocidad=250;
    bool primero;
    sf::RectangleShape player;


    Jugador(sf::RenderWindow *w, int plargo, int paltura, int ppuntaje, bool pprimero);
    void mover(sf::Time& elapsedTime) override;
    void mover(sf::Time& elapsedTime, sf::FloatRect p1, sf::FloatRect p2) override;
    void dibujar() override;

};


#endif //PINGPONG_JUGADOR_H
