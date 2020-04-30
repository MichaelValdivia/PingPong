//
// Created by PERSONAL on 28/04/2020.
//

#include "PantallaInicial.h"

PantallaInicial::PantallaInicial(int px, int py, int plargo, int paltura, int pscore,
        sf::RenderWindow *w,sf::Time* elapsedTime, sf::Font* font) : Pantalla(px,py,plargo,paltura,pscore, w, elapsedTime, font) {

}

void PantallaInicial::dibujar() {
    this->isDibujado = 1;
    sf::Text texto;
    sf::Text texto2;
    texto.setFont(*this->fuente);
    texto.setString("PING PONG");
    texto.setScale(2,2);
    texto.setPosition(this->pos_x,this->pos_y);
    this->window->draw(texto);
    texto2.setFont(*this->fuente);
    texto2.setString("Presiona ESPACIO para continuar");
    texto2.setScale(1,1);
    texto2.setPosition(this->pos_x-100,this->pos_y+300);
    this->window->draw(texto2);


}

void PantallaInicial::eventos() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) )
        this->isDibujado = 0;
}

bool PantallaInicial::getIsDibujado() {
    return isDibujado;
}


