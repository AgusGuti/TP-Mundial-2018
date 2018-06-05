#ifndef EQUIPO_H_INCLUDED

struct Equipo
{
   int idEquipo;
   char nombreEquipo[40];
   int  golesAFavor;
   int  golesEnContra;
   int  puntos;
};

#define EQUIPO_H_INCLUDED

/**
pre:
post:
  */

void constructor(Equipo &equipo);

/**
pre:
post:
  */



void destructor(Equipo &equipo);

/**
pre:
post:
  */

void setIdEquipo(Equipo &equipo,int  idEquipo);

/**
pre:
post:
  */

void setNombreEquipo(Equipo &equipo,char nombreEquipo[10]);

/**
pre:
post:
  */

void setGolesAFavor(Equipo &equipo,int  golesAFavor);

/**
pre:
post:
  */

void setGolesEnContra(Equipo &equipo,int  golesEnContra);


/**
pre:
post:
  */

void setPuntos(Equipo &equipo,int puntos);

/**
pre:
post:
  */

int getIdEquipo(Equipo &equipo);

/**
pre:
post:
  */

char getNombreEquipo(Equipo &equipo);

/**
pre:
post:
  */



int getGolesAFavor(Equipo &equipo);

/**
pre:
post:
  */

int getGolesEnContra(Equipo &equipo);


/**
pre:
post:
  */

int getPuntos(Equipo &equipo);







#endif // EQUIPO_H_INCLUDED
