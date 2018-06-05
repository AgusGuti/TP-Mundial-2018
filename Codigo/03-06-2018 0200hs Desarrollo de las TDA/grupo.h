#include <string>
using namespace std;

#ifndef GRUPO_H_INCLUDED

struct Grupo
{
    int idGrupo;
    string nombreGrupo;
    int idEquipo1;
    int idEquipo2;
    int idEquipo3;
    int idEquipo4;
};

#define GRUPO_H_INCLUDED

#ifndef NULL
#define NULL      0
#endif

/**
pre: La instancia de grupo no debe estar creada, el nombre no debe estar vacio
     y los idEquipo deben ser > -1.
post: Se genera una instancia de grupo con los datos pasados.
    ID = -1 hasta que se le asigne por posicion en la lista.
  */

void constructor(Grupo &grupo, string nombreGrupo, int idEquipo1, int idEquipo2, int idEquipo3, int idEquipo4);

/**
pre: La instancia de grupo debe estar creada
post: Elimina la instancia y referencia de grupo y su dependencia
  */

void destructor(Grupo &grupo);

/**
pre: La instancia de grupo debe estar creada, el id debe ser > -1
post: Carga el nuevo valor al id de grupo
  */

void setIdGrupo(Grupo &grupo, int idGrupo);

/**
pre: La instancia de grupo debe estar creada, string no debe estar vacio
post: Carga el nuevo valor al nombre de grupo
  */

void setNombreGrupo(Grupo &grupo, string nombreGrupo);

/**
pre: La instancia de grupo debe estar creada, el id debe ser > -1
post: Carga el nuevo valor al id de equipo 1
  */

void setIdEquipo1(Grupo &grupo,int idEquipo1);

/**
pre: La instancia de grupo debe estar creada, el id debe ser > -1
post: Carga el nuevo valor al id de equipo 2
  */

void setIdEquipo2(Grupo &grupo,int idEquipo2);

/**
pre: La instancia de grupo debe estar creada, el id debe ser > -1
post: Carga el nuevo valor al id de equipo 3
  */

void setIdEquipo3(Grupo &grupo,int idEquipo3);

/**
pre: La instancia de grupo debe estar creada, el id debe ser > -1
post: Carga el nuevo valor al id de equipo 4
  */

void setIdEquipo4(Grupo &grupo,int idEquipo4);

/**
pre: La instancia de grupo debe estar creada
post: Devuelve el valor del id del grupo
  */

int getIdGrupo(Grupo &grupo);

/**
pre: La instancia de grupo debe estar creada
post: Devuelve el valor del nombre del grupo
  */

string getNombreGrupo(Grupo &grupo);

/**
pre: La instancia de grupo debe estar creada
post: Devuelve el valor del id del equipo 1
  */

int getIdEquipo1(Grupo &grupo);

/**
pre: La instancia de grupo debe estar creada
post: Devuelve el valor del id del equipo 2
  */


int getIdEquipo2(Grupo &grupo);

/**
pre: La instancia de grupo debe estar creada
post: Devuelve el valor del id del equipo 3
  */

int getIdEquipo3(Grupo &grupo);

/**
pre: La instancia de grupo debe estar creada
post: Devuelve el valor del id del equipo 4
  */

int getIdEquipo4(Grupo &grupo);


#endif // GRUPO_H_INCLUDED
