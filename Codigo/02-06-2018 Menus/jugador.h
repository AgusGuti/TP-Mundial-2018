#ifndef JUGADOR_H_INCLUDED

struct Jugador
{
   int idJugador;
   char nombreJugador[40];
   int  golesJugador;


};

#define JUGADOR_H_INCLUDED

/**
pre:
post:
  */


void constructor(Jugador &jugador);

/**
pre:
post:
  */

void destructor(Jugador &jugador);

/**
pre:
post:
  */


void setIdJugador(Jugador &jugador,int  idJugador);

/**
pre:
post:
  */


void setNombreJugador(Jugador &jugador , char NombreJugador[40]);

/**
pre:
post:
  */

void setGolesJugador(Jugador &jugador, int golesJugador);

/**
pre:
post:
  */


int getIdJugador(Jugador &jugador);


/**
pre:
post:
  */

char getNombreJugador(Jugador &jugador);

/**
pre:
post:
  */

int getGolesJugador(Jugador &jugador);



#endif // JUGADOR_H_INCLUDED
