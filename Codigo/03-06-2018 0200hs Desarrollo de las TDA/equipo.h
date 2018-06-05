#include <string>
using namespace std;

#ifndef EQUIPO_H_INCLUDED

struct Equipo
{
   int idEquipo;
   string nombreEquipo;
   int  golesAFavor;
   int  golesEnContra;
   int  puntos;
};

#define EQUIPO_H_INCLUDED

#ifndef NULL
#define NULL      0
#endif

/**
pre: La instancia de equipo no debe estar creada, el nombre no debe estar vacio
     y los goles y los puntos deben ser > 0.
post: Se genera una instancia de equipo con los datos pasados.
    ID = -1 hasta que se le asigne por posicion en la lista.
  */

void constructor(Equipo &equipo, string nombreEquipo, int  golesAFavor, int  golesEnContra, int  puntos);

/**
pre: La instancia de equipo debe estar creada
post: Elimina la instancia y referencia de equipo y su dependencia
  */

void destructor(Equipo &equipo);

/**
pre: La instancia de equipo debe estar creada, el id debe ser > -1
post: Carga el nuevo valor al id de equipo
  */

void setIdEquipo(Equipo &equipo, int idEquipo);

/**
pre: La instancia de equipo debe estar creada, string no debe estar vacio
post: Carga el nuevo valor al nombre de equipo
  */
void setNombreEquipo(Equipo &equipo, string nombreEquipo);

/**
pre: La instancia de equipo debe estar creada, los goles deben ser > 0
post: Carga el nuevo valor a los goles a favor del equipo
  */

void setGolesAFavor(Equipo &equipo, int golesAFavor);

/**
pre: La instancia de equipo debe estar creada, los goles deben ser > 0
post: Carga el nuevo valor a los goles en contra del equipo
  */

void setGolesEnContra(Equipo &equipo, int golesEnContra);

/**
pre: La instancia de equipo debe estar creada, los puntos deben ser > 0
post: Carga el nuevo valor a los puntos del equipo
  */

void setPuntos(Equipo &equipo, int puntos);

/**
pre: La instancia de equipo debe estar creada
post: Devuelve el valor del id del equipo
  */

int getIdEquipo(Equipo &equipo);

/**
pre: La instancia de equipo debe estar creada
post: Devuelve el valor del nombre del equipo
  */

string getNombreEquipo(Equipo &equipo);

/**
pre: La instancia de equipo debe estar creada
post: Devuelve el valor de los goles a favor del equipo
  */

int getGolesAFavor(Equipo &equipo);

/**
pre: La instancia de equipo debe estar creada
post: Devuelve el valor de los goles en contra del equipo
  */

int getGolesEnContra(Equipo &equipo);

/**
pre: La instancia de equipo debe estar creada
post: Devuelve el valor de los puntos del equipo
  */

int getPuntos(Equipo &equipo);

#endif // EQUIPO_H_INCLUDED
