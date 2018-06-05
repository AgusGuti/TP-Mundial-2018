#ifndef PARTIDO_H_INCLUDED


struct Partido
{
  int idPartido;
  int idEquipoL;
  int ideEquipoV;
  int golesL;
  int golesV;

};
#define PARTIDO_H_INCLUDED


/**
pre:
post:
  */

void constructor(Partido &partido);
/**
pre:
post:
  */
void destructor(Partido &partido);

/**
pre:
post:
  */

void setIdPartido(Partido &partido,int idPartido);

/**
pre:
post:
  */
void setIdEquipoL(Partido &partido, int idEquipoL);

/**
pre:
post:
  */
void setIdEquipoV(Partido &partido, int idEquipoV);
/**
pre:
post:
  */

void setGolesL(Partido &partido,int golesL);

/**
pre:
post:
  */
void setGolesV(Partido &partido,int golesV);

/**
pre:
post:
  */

void getIdPartido(Partido &partido);

/**
pre:
post:
  */
int getIdEquipoL(Partido &partido);

/**
pre:
post:
  */
int getIdEquipoV(Partido &partido);
/**
pre:
post:
  */

int getGolesL(Partido &partido);

/**
pre:
post:
  */
int getGolesV(Partido &partido);




#endif // PARTIDO_H_INCLUDED
