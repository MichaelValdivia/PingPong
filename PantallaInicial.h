//
// Created by PERSONAL on 28/04/2020.
//

#ifndef PINGPONG_PANTALLAINICIAL_H
#define PINGPONG_PANTALLAINICIAL_H
#include "Pantalla.h"

    class PantallaInicial: public Pantalla{
private:
    bool isDibujado=1;
public:
        PantallaInicial(int px, int py, int plargo, int paltura,int pscore, sf::RenderWindow* w,
                sf::Time* elapsedTime, sf::Font* font);
        void dibujar() override;
        void eventos() override;
        bool getIsDibujado();

};


#endif //PINGPONG_PANTALLAINICIAL_H
