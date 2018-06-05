#ifndef GRUPO_H_INCLUDED

struct Grupo
{

    char idGrupo;
    char nombreGrupo[10];
    int idEquipo1;
    int idEquipo2;
    int idEquipo3;
    int idEquipo4;

};

#define GRUPO_H_INCLUDED

/**
pre:
post:
  */

void constructor(Grupo &grupo);


/**
pre:
post:
  */

void destructor(Grupo &grupo);

/**
pre:
post:
  */

void setIdGrupo(Grupo &grupo,char idGrupo);

/**
pre:
post:
  */

void setNombreGrupo(Grupo &grupo,char nombreGrupo[10]);

/**
pre:
post:
  */

void setIdEquipo1(Grupo &grupo,int idEquipo1);

/**
pre:
post:
  */

void setIdEquipo2(Grupo &grupo,int idEquipo2);

/**
pre:
post:
  */
void setIdEquipo3(Grupo &grupo,int idEquipo3);
/**
pre:
post:
  */
void setIdEquipo4(Grupo &grupo,int idEquipo4);
/**
pre:
post:
  */

char getIdGrupo(Grupo &grupo);
/**
pre:
post:
  */

char getNombreGrupo(Grupo &grupo);

/**
pre:
post:
  */

void getIdEquipo1(Grupo &grupo);
/**
pre:
post:
  */


void getIdEquipo2(Grupo &grupo);
/**
pre:
post:
  */


void getIdEquipo3(Grupo &grupo);

/**
pre:
post:
  */

void getIdEquipo4(Grupo &grupo);





#endif // GRUPO_H_INCLUDED
