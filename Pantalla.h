//
// Created by PERSONAL on 28/04/2020.
//

#ifndef PINGPONG_PANTALLA_H
#define PINGPONG_PANTALLA_H
#include <SFML/Graphics.hpp>
const int modeWidthX = 800;
const int modeHeightX = 600;
class Pantalla {
protected:
    int pos_x;
    int pos_y;
    int largo;
    int altura;
    sf::RenderWindow* window;
    sf::Font* fuente;
    sf::Time* tiempo;
    int score;
public:
    Pantalla(int px, int py,int plargo,int paltura,int pscore, sf::RenderWindow* w,sf::Time* elapsedTime, sf::Font* font);
    virtual void dibujar() = 0;
    virtual void eventos() = 0;
    void set_posicion(int x, int y);
    void set_LargoxAlto(int l, int a);

};


#endif //PINGPONG_PANTALLA_H
