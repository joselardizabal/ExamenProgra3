#include "personajetablero.h"

PersonajeTablero::PersonajeTablero(int pos_x,int pos_y, int hp, int ataque,int jugador)
{

    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->ataque = ataque;
    this->hp = hp;
    this->jugador = jugador;
    //constructor
    }

PersonajeTablero::~PersonajeTablero()
{
    //dtor
}
