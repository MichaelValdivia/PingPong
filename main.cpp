#include <iostream>
#include "Jugador.h"
#include "Pelota.h"
#include "PantallaInicial.h"
#include "PantallaJuego.h"
#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>

const int modeWidth = 800;
const int modeHeight = 600;
int main() {
    int* score =0;
    sf::Font fuente;
    if(!fuente.loadFromFile("C:\\Users\\PERSONAL\\CLionProjects\\PingPong\\Gobold.ttf"))
    {
        std::cout << "Error al cargar la fuente" << std::endl;
        system("pause");
    }

    sf::Clock reloj;
    sf::Time tiempo;
    tiempo = reloj.restart();
    sf::RenderWindow ventana(sf::VideoMode(modeWidth, modeHeight), "SFML works!");

    PantallaInicial pantallaInicial(modeWidth - 500, modeHeight - 500, 800, 600,0, &ventana, &tiempo, &fuente);
    PantallaJuego pantallaJuego(modeWidth - 500, modeHeight - 500, 800, 600,0, &ventana, &tiempo, &fuente);
    while (ventana.isOpen())
    {
        tiempo = reloj.restart();
        sf::Event event;
        while (ventana.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                ventana.close();
        }
        if (pantallaInicial.getIsDibujado()){
            pantallaInicial.dibujar();
            pantallaInicial.eventos();
        }

        if (!(pantallaInicial.getIsDibujado()) && (pantallaJuego.getScore() <5))
        {
            ventana.clear();
           if(!pantallaJuego.getIsDibujado())

            pantallaJuego.dibujar();
           if(pantallaJuego.getIsDibujado()){
               pantallaJuego.eventos();
           }
        }

        if(pantallaJuego.getScore()==5 ){

        }


        ventana.display();



     }


}
