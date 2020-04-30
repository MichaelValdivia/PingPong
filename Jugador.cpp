//
// Created by PERSONAL on 28/04/2020.
//
const int modeWidth = 800;
const int modeHeight = 600;
#include "Jugador.h"
#include <SFML/System/Clock.hpp>
Jugador::Jugador(sf::RenderWindow *w,
        int plargo, int paltura, int ppuntaje, bool pprimero): Figura(w) {
    largo = plargo;
    altura = paltura;
    puntaje = ppuntaje;
    primero = pprimero;
}

void Jugador::dibujar() {
  //DRAW DEL RECTANGULO
    this->player = sf::RectangleShape(sf::Vector2f(Jugador::largo,Jugador::altura));
    Jugador::player.setPosition(pos_x,pos_y);
    Jugador::player.setFillColor(sf::Color::White);
    this->window->draw(Jugador::player);
}


void Jugador::mover(sf::Time& elapsedTime) {

    // Obtenemos la posición superior e inferior
    float top = this->player.getGlobalBounds().top;
    float bottom = this->player.getGlobalBounds().top + this->player.getGlobalBounds().height;

    // Movemos la pala en función de las teclas pulsada
    // comprobando no salirnos de la pantalla
    if (this->primero) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && top > 0)
            this->player.move(0, -elapsedTime.asSeconds() * this->velocidad);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && bottom < modeHeight)
            this->player.move(0, elapsedTime.asSeconds() * this->velocidad);
    }
    else{


        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && top > 0)
            this->player.move(0, -elapsedTime.asSeconds() * this->velocidad);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && bottom < modeHeight)
            this->player.move(0, elapsedTime.asSeconds() * this->velocidad);

    }
}

void Jugador::mover(sf::Time &elapsedTime, sf::FloatRect p1, sf::FloatRect p2) {

}
