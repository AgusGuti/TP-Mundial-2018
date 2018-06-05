#include <string>
using namespace std;

#ifndef JUGADOR_H_INCLUDED

struct Jugador
{
   int idJugador;
   string nombreJugador;
   int  golesJugador;
   int idEquipo;
};

#define JUGADOR_H_INCLUDED

#ifndef NULL
#define NULL      0
#endif

/**
pre: La instancia de jugador no debe estar creada, el nombre no debe estar vacio
     y los goles y el idEquipo deben ser > 0.
post: Se genera una instancia de jugador con los datos pasados.
    ID = -1 hasta que se le asigne por posicion en la lista.
  */


void constructor(Jugador &jugador, string nombreJugador, int golesJugador, int idEquipo);

/**
pre: La instancia de jugador debe estar creada
post: Elimina la instancia y referencia de jugador y su dependencia
  */

void destructor(Jugador &jugador);

/**
pre: La instancia de jugador debe estar creada, el id debe ser > -1
post: Carga el nuevo valor al id de jugador
  */

void setIdJugador(Jugador &jugador,int  idJugador);

/**
pre: La instancia de jugador debe estar creada, string no debe estar vacio
post: Carga el nuevo valor al nombre de jugador
  */

void setNombreJugador(Jugador &jugador , string nombreJugador);

/**
pre: La instancia de jugador debe estar creada, los goles deben ser > 0
post: Carga el nuevo valor a los goles del jugador
  */

void setGolesJugador(Jugador &jugador, int golesJugador);

/**
pre: La instancia de jugador debe estar creada, el id debe ser > -1
post: Carga el nuevo valor al id del equipo del jugador
  */

void setIdEquipo(Jugador &jugador, int idEquipo);

/**
pre: La instancia de jugador debe estar creada
post: Devuelve el valor del id del jugador
  */

int getIdJugador(Jugador &jugador);


/**
pre: La instancia de jugador debe estar creada
post: Devuelve el valor del nombre del jugador
  */

string getNombreJugador(Jugador &jugador);

/**
pre: La instancia de jugador debe estar creada
post: Devuelve el valor de los goles del jugador
  */

int getGolesJugador(Jugador &jugador);

/**
pre: La instancia de jugador debe estar creada
post: Devuelve el valor del id del equipo del jugador
  */

int getIdEquipo(Jugador &jugador);


#endif // JUGADOR_H_INCLUDED
