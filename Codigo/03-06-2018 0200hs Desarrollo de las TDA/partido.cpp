#include <iostream>
#include "partido.h"

using namespace std;

void constructor(Partido &partido, int idEquipoL, int ideEquipoV){
    setIdPartido(partido, -1);
    setIdEquipoL(partido, idEquipoL);
    setIdEquipoV(partido, ideEquipoV);
    setGolesL(partido, -1);
    setGolesV(partido, -1);
}


void destructor(Partido &partido){

}


void setIdPartido(Partido &partido, int idPartido){
    if(idPartido >= -1)
        partido.idPartido = idPartido;
    else
        cout << "ERROR dato incorrecto";
}


void setIdEquipoL(Partido &partido, int idEquipoL){
    if(idEquipoL >= -1 && idEquipoL <= 32)
        partido.idEquipoL = idEquipoL;
    else
        cout << "ERROR dato incorrecto";
}


void setIdEquipoV(Partido &partido, int idEquipoV){
    if(idEquipoV >= -1 && idEquipoV <= 32)
        partido.idEquipoV = idEquipoV;
    else
        cout << "ERROR dato incorrecto";
}


void setGolesL(Partido &partido, int golesL){
    if(golesL >= -1)
        partido.golesL = golesL;
    else
        cout << "ERROR dato incorrecto";
}


void setGolesV(Partido &partido, int golesV){
    if(golesV >= -1)
        partido.golesV = golesV;
    else
        cout << "ERROR dato incorrecto";
}


int getIdPartido(Partido &partido){
    return partido.idPartido;
}


int getIdEquipoL(Partido &partido){
    return partido.idEquipoL;
}


int getIdEquipoV(Partido &partido){
    return partido.idEquipoV;
}


int getGolesL(Partido &partido){
    return partido.golesL;
}


int getGolesV(Partido &partido){
    return partido.golesV;
}

