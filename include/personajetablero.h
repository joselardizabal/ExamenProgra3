#ifndef PERSONAJETABLERO_H
#define PERSONAJETABLERO_H
#include "personajetablero.h"
#include <iostream>
using namespace std;
class PersonajeTablero
{
int pos_x;
int pos_y;
int hp;
int ataque;
int jugador;
    public:
        PersonajeTablero(int pos_x,int pos_y,int hp,int ataque,int jugador);
        virtual ~PersonajeTablero();
    protected:
    private:
};

#endif // PERSONAJETABLERO_H
