#include <iostream>
#include "jugador.h"

using namespace std;


void constructor(Jugador &jugador, string nombreJugador, int golesJugador, int idEquipo){
    setIdJugador(jugador, 0);
    setNombreJugador(jugador, nombreJugador);
    setGolesJugador(jugador, golesJugador);
    setIdEquipo(jugador, idEquipo);
}


void destructor(Jugador &jugador){

}


void setIdJugador(Jugador &jugador,int  idJugador){
    if(idJugador >= -1)
        jugador.idJugador = idJugador;
    else
        cout << "ERROR dato incorrecto";
}


void setNombreJugador(Jugador &jugador , string nombreJugador){
    if(nombreJugador != "")
        jugador.nombreJugador = nombreJugador;
    else
        cout << "ERROR dato incorrecto";
}


void setGolesJugador(Jugador &jugador, int golesJugador){
    if(golesJugador >= 0)
        jugador.golesJugador = golesJugador;
    else
        cout << "ERROR dato incorrecto";
}


void setIdEquipo(Jugador &jugador, int idEquipo){
    if(idEquipo >= -1 && idEquipo <= 32)
        jugador.idEquipo = idEquipo;
    else
        cout << "ERROR dato incorrecto";
}


int getIdJugador(Jugador &jugador){
    return jugador.idJugador;
}


string getNombreJugador(Jugador &jugador){
    return jugador.nombreJugador;
}


int getGolesJugador(Jugador &jugador){
    return jugador.golesJugador;
}


int getIdEquipo(Jugador &jugador){
    return jugador.idEquipo;
}

