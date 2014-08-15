#include <iostream>
#include "personajetablero.h"
using namespace std;


class PersonajeEnTablero
{


public:
    PersonajeEnTablero* sig;
    int pos_x;
int pos_y;
int hp;
int ataque;
int jugador;
    PersonajeEnTablero(int pos_x,int pos_y,int hp,int ataque,int jugador)
    {
         this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->ataque = ataque;
    this->hp = hp;
    this->jugador = jugador;
        sig=NULL;


    }


};
class ListasPersonajes
{
public:
int dano;
 int pos_x;
int pos_y;
int hp;
int ataque;
int jugador;
 PersonajeEnTablero*inicio;
ListasPersonajes()
    {
        inicio = NULL;
    }
void agregar(PersonajeEnTablero*nuevo)
    {
        if(inicio == NULL)
        {
            inicio = nuevo;
        }
        else
        {
            PersonajeEnTablero*temp = inicio;
            while(temp->sig != NULL)
            {
                temp = temp->sig;
            }
            temp->sig = nuevo;

        }

    }
    void danodearea(int dano,int jugador){

    if(inicio == NULL)
        {
           cout<<"ESTA VACIO."<<endl;

        }else
        {
            for(PersonajeEnTablero*temp=inicio; temp!=NULL; temp = temp->sig){

            if(temp->jugador == jugador){
            temp->hp-=dano;
            }

            }

        }
        }
        void debilitadordeArea(int debilitacion,int jugador){

    if(inicio == NULL)
        {
           cout<<"ESTA VACIO."<<endl;

        }else
        {
            for(PersonajeEnTablero*temp=inicio; temp!=NULL; temp = temp->sig){

            if(temp->jugador == jugador){
            temp->ataque-=debilitacion;
            }

            }

        }
        }
        void curadordeArea(int curacion,int jugador){

    if(inicio == NULL)
        {
           cout<<"ESTA VACIO."<<endl;

        }else
        {
            for(PersonajeEnTablero*temp=inicio; temp!=NULL; temp = temp->sig){

            if(temp->jugador == jugador){
            temp->hp+=curacion;
            }

            }

        }
        }




    void imprimir()
    {


        for(PersonajeEnTablero*temp=inicio; temp!=NULL; temp = temp->sig)
        {
            cout<<temp->pos_x<<endl;
            cout<<temp->pos_y<<endl;
            cout<<temp->hp<<endl;
            cout<<temp->ataque<<endl;
            cout<<temp->jugador<<endl;

        }
    }
};
int main()
{


     ListasPersonajes l;
    l.agregar(new PersonajeEnTablero(1,3,10,5,2));
    cout<<"_______________________"<<endl;
    l.imprimir();
    cout<<"_______________________"<<endl;
    l.danodearea(5,2);
cout<<"_______________________"<<endl;
    l.imprimir();
    cout<<"_______________________"<<endl;
    l.curadordeArea(10,2);
    l.debilitadordeArea(200,2);
    l.danodearea(5,2);
    cout<<"_______________________"<<endl;
    l.imprimir();
    cout<<"_______________________"<<endl;
}
