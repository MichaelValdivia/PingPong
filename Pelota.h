//
// Created by PERSONAL on 28/04/2020.
//

#ifndef PINGPONG_PELOTA_H
#define PINGPONG_PELOTA_H
#include "Figura.h"

class Pelota: public Figura {
private:

public:

    sf::CircleShape ball;
    int radio;
    float vel_x=300;
    float vel_y=300;
    float isLeft;
    float isRight;
    Pelota(sf::RenderWindow *w, int pradio);
    void dibujar() override;
    void mover(sf::Time& elapsedTime) override;
    void mover(sf::Time& elapsedTime, sf::FloatRect p1, sf::FloatRect p2) override;
};


#endif //PINGPONG_PELOTA_H
