//
// Created by PERSONAL on 28/04/2020.
//

#include "Pelota.h"
const int modeWidth = 800;
const int modeHeight = 600;
Pelota::Pelota( sf::RenderWindow *w, int pradio): Figura(w){
    radio = pradio;
}

void Pelota::dibujar() {
    Pelota::ball = sf::CircleShape(Pelota::radio);
    Pelota::ball.setPosition(pos_x,pos_y);
    Pelota::ball.setFillColor(sf::Color::White);
    window->draw(Pelota::ball);
}

void Pelota::mover(sf::Time &elapsedTime, sf::FloatRect p1, sf::FloatRect p2) {

    // Obtenemos los cuatro laterales de la bola
    this->isLeft = this->ball.getPosition().x - this->ball.getOrigin().x;
    this->isRight = this->ball.getPosition().x + this->ball.getOrigin().x;
    float top = this->ball.getPosition().y - this->ball.getOrigin().y;
    float bottom = this->ball.getPosition().y + this->ball.getOrigin().y;

    // Comprobamos si choca contra las paredes
    if (this->isLeft <= 0 && vel_x < 0)
    {
        vel_x *= -1;
        //this->sound.play();
        //score.addPointIA();
    }
    if (this->isRight >= modeWidth-30 && vel_x > 0)
    {
        vel_x *= -1;
        //this->sound.play();
        //score.addPointPlayer();
    }
    if ((top <= 0 && vel_y < 0) || (bottom >= modeHeight-30 && vel_y> 0))
    {
        vel_y *= -1;
        //this->sound.play();
    }
    // Por último comprobamos si ha chocado contra las palas
    if (ball.getGlobalBounds().intersects(p1) || ball.getGlobalBounds().intersects(p2))
    {
        vel_x *= -1;
       // this->sound.play();
    }
    // Movemos la bola multiplicando la velocidad por el tiempo pasado
    this->ball.move(elapsedTime.asSeconds() * vel_x, elapsedTime.asSeconds() * vel_y);
}

void Pelota::mover(sf::Time &elapsedTime) {

}


