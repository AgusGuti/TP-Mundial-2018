#include<iostream>
#include "grupo.h"


void constructor(Grupo &grupo, string nombreGrupo, int idEquipo1, int idEquipo2, int idEquipo3, int idEquipo4){
    setIdGrupo(grupo, -1);
    setNombreGrupo(grupo, nombreGrupo);
    setIdEquipo1(grupo, idEquipo1);
    setIdEquipo2(grupo, idEquipo2);
    setIdEquipo3(grupo, idEquipo3);
    setIdEquipo4(grupo, idEquipo4);
}


void destructor(Grupo &grupo){

}


void setIdGrupo(Grupo &grupo, int idGrupo){
    if(idGrupo >= -1 && idGrupo <= 8)
        grupo.idGrupo = idGrupo;
    else
        cout << "ERROR dato incorrecto";
}


void setNombreGrupo(Grupo &grupo, string nombreGrupo){
    if(nombreGrupo != "")
        grupo.nombreGrupo = nombreGrupo;
    else
        cout << "ERROR dato incorrecto";
}


void setIdEquipo1(Grupo &grupo, int idEquipo1){
    if(idEquipo1 >= -1 && idEquipo1 <= 32)
        grupo.idEquipo1 = idEquipo1;
    else
        cout << "ERROR dato incorrecto";
}


void setIdEquipo2(Grupo &grupo, int idEquipo2){
    if(idEquipo2 >= -1 && idEquipo2 <= 32)
        grupo.idEquipo2 = idEquipo2;
    else
        cout << "ERROR dato incorrecto";
}


void setIdEquipo3(Grupo &grupo, int idEquipo3){
    if(idEquipo3 >= -1 && idEquipo3 <= 32)
        grupo.idEquipo3 = idEquipo3;
    else
        cout << "ERROR dato incorrecto";
}


void setIdEquipo4(Grupo &grupo, int idEquipo4){
    if(idEquipo4 >= -1 && idEquipo4 <= 32)
        grupo.idEquipo4 = idEquipo4;
    else
        cout << "ERROR dato incorrecto";
}


int getIdGrupo(Grupo &grupo){
    return grupo.idGrupo;
}


string getNombreGrupo(Grupo &grupo){
    return grupo.nombreGrupo;
}


int getIdEquipo1(Grupo &grupo){
    return grupo.idEquipo1;
}


int getIdEquipo2(Grupo &grupo){
    return grupo.idEquipo2;
}


int getIdEquipo3(Grupo &grupo){
    return grupo.idEquipo3;
}


int getIdEquipo4(Grupo &grupo){
    return grupo.idEquipo4;
}
