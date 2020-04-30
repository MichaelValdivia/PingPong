//
// Created by PERSONAL on 28/04/2020.
//

#ifndef PINGPONG_FIGURA_H
#define PINGPONG_FIGURA_H
#include <SFML/Graphics.hpp>
class Figura{
protected:
    int pos_x;
    int pos_y;
    int des_x;
    int des_y;
    sf::RenderWindow* window;
public:
    Figura(sf::RenderWindow* w);
    virtual void dibujar() = 0;
    virtual void mover(sf::Time& elapsedTime) = 0;
    virtual void mover(sf::Time& elapsedTime, sf::FloatRect p1, sf::FloatRect p2) = 0;
    void set_posicion (int px, int py);
};

#endif