//
// Created by PERSONAL on 28/04/2020.
//

#include "PantallaJuego.h"

PantallaJuego::PantallaJuego(int px, int py, int plargo, int paltura, int pscore, sf::RenderWindow *w,
                             sf::Time *elapsedTime, sf::Font *font) : Pantalla(px, py, plargo, paltura, pscore, w,
                                                                               elapsedTime, font) {

}

void PantallaJuego::dibujar() {
    Jugador jugador1(this->window, 20,50,0, true);
    jugador1.set_posicion(0,0);
    this->jugador1= &jugador1;


    Jugador jugador2(this->window, 20,50,0, false);
    jugador2.set_posicion(800-jugador2.largo,600-jugador2.altura);
    this->jugador2 = &jugador2;


    Pelota bolita(this->window,15);
    bolita.set_posicion(400-bolita.radio,300-bolita.radio);
    this->jugador1->dibujar();
    this->jugador2->dibujar();
    bolita.dibujar();
    this->isDibujado=1;
}

void PantallaJuego::eventos() {


  //  this->jugador1->mover(*this->tiempo);
  //  this->jugador2->mover(*this->tiempo);


    //this->bolita->mover(*tiempo, jugador1->player.getGlobalBounds(), jugador2->player.getGlobalBounds());
    window->draw(this->jugador1->player);
    window->draw(this->jugador2->player);
 //   this->window->draw(bolita->ball);

}

void PantallaJuego::dibujar_red() {

}

void PantallaJuego::actualizar_puntaje() {

}

int PantallaJuego::getScore() {
    return score;
}

bool PantallaJuego::getIsDibujado() {
    return isDibujado;
}



void PantallaJuego::colision() {

}
