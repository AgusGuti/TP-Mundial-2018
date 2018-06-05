#include <string>
using namespace std;

#ifndef PARTIDO_H_INCLUDED

struct Partido
{
  int idPartido;
  int idEquipoL;
  int idEquipoV;
  int golesL;
  int golesV;
};

#define PARTIDO_H_INCLUDED

#ifndef NULL
#define NULL      0
#endif

/**
pre: La instancia de partido no debe estar creada, el nombre no debe estar vacio
     y los goles y los idEquipo deben ser > -1.
post: Se genera una instancia de partido con los datos pasados.
    ID = -1 hasta que se le asigne por posicion en la lista.
    Goles = -1 hasta que se registren durante el juego
  */

void constructor(Partido &partido, int idEquipoL, int ideEquipoV);

/**
pre: La instancia de partido debe estar creada
post: Elimina la instancia y referencia de partido y su dependencia
  */

void destructor(Partido &partido);

/**
pre: La instancia de partido debe estar creada, el id debe ser > -1
post: Carga el nuevo valor al id de partido
  */

void setIdPartido(Partido &partido,int idPartido);

/**
pre: La instancia de partido debe estar creada, el id debe ser > -1
post: Carga el nuevo valor al id del equipo local
  */

void setIdEquipoL(Partido &partido, int idEquipoL);

/**
pre: La instancia de partido debe estar creada, el id debe ser > -1
post: Carga el nuevo valor al id del equipo visitante
  */

void setIdEquipoV(Partido &partido, int idEquipoV);

/**
pre: La instancia de partido debe estar creada, los goles deben ser > 0
post: Carga el nuevo valor a los goles del equipo local del partido
  */

void setGolesL(Partido &partido,int golesL);

/**
pre: La instancia de partido debe estar creada, los goles deben ser > 0
post: Carga el nuevo valor a los goles del equipo visitante del partido
  */

void setGolesV(Partido &partido,int golesV);

/**
pre: La instancia de partido debe estar creada
post: Devuelve el valor del id del partido
  */

int getIdPartido(Partido &partido);

/**
pre: La instancia de partido debe estar creada
post: Devuelve el valor del id del equipo local del partido
  */

int getIdEquipoL(Partido &partido);

/**
pre: La instancia de partido debe estar creada
post: Devuelve el valor del id del equipo visitante del partido
  */

int getIdEquipoV(Partido &partido);

/**
pre: La instancia de partido debe estar creada
post: Devuelve el valor de los goles del equipo local del partido
  */

int getGolesL(Partido &partido);

/**
pre: La instancia de partido debe estar creada
post: Devuelve el valor de los goles del equipo visitante del partido
  */

int getGolesV(Partido &partido);


#endif // PARTIDO_H_INCLUDED
