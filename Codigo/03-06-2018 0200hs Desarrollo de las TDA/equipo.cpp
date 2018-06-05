#include <iostream>
#include "equipo.h"

using namespace std;

void constructor(Equipo &equipo, string nombreEquipo, int  golesAFavor, int  golesEnContra, int  puntos){
    setIdEquipo(equipo, 0);
    setNombreEquipo(equipo, nombreEquipo);
    setGolesAFavor(equipo, golesAFavor);
    setGolesEnContra(equipo, golesEnContra);
    setPuntos(equipo, puntos);
}


void destructor(Equipo &equipo){

}


void setIdEquipo(Equipo &equipo, int idEquipo){
    if(idEquipo >= -1 && idEquipo <= 32)
        equipo.idEquipo = idEquipo;
    else
        cout << "ERROR dato incorrecto";
}


void setNombreEquipo(Equipo &equipo, string nombreEquipo){
    if(nombreEquipo != "")
        equipo.nombreEquipo = nombreEquipo;
    else
        cout << "ERROR dato incorrecto";
}


void setGolesAFavor(Equipo &equipo, int golesAFavor){
    if(golesAFavor >= 0)
        equipo.golesAFavor = golesAFavor;
    else
        cout << "ERROR dato incorrecto";
}


void setGolesEnContra(Equipo &equipo, int golesEnContra){
    if(golesEnContra >= 0)
        equipo.golesEnContra = golesEnContra;
    else
        cout << "ERROR dato incorrecto";
}


void setPuntos(Equipo &equipo, int puntos){
    if(puntos >= 0)
        equipo.puntos = puntos;
    else
        cout << "ERROR dato incorrecto";
}


int getIdEquipo(Equipo &equipo){
    return equipo.idEquipo;
}


string getNombreEquipo(Equipo &equipo){
    return equipo.nombreEquipo;
}


int getGolesAFavor(Equipo &equipo){
    return equipo.golesAFavor;
}


int getGolesEnContra(Equipo &equipo){
    return equipo.golesEnContra;
}


int getPuntos(Equipo &equipo){
    return equipo.puntos;
}

