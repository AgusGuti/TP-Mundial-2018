#include <iostream>
#include <string>

using namespace std;
void menuPrincipal();
void administrarEquipos();
void administrarPartidos();
void procesarReportes();


int main()
{
    int opc;
    cout <<"\t\t\t\t\t\tRUSIA 2018"<<endl;
    do{
        menuPrincipal();
        cin>>opc;
        switch (opc){
            case 1:administrarEquipos();break;
            case 2:administrarPartidos();break;
            case 3:procesarReportes();break;
            }
    }while(opc!=4);

    return 0;
}


void menuPrincipal(){
    cout <<"MENU PRINCIPAL:\n Que desea hacer?";
    cout <<endl<<"\t1: Para administrar equipos \t2: Para administrar partidos\t3:Procesar reportes\t4: Salir\n";
}

void administrarEquipos(){
    int opc;
    do{
        cout <<"ADMINISTRACION DE EQUIPOS:\n";
        cout <<"\t1:Para dar de alta \t2:Para dar de baja \t3:Para modificar \t 4:Para volver al menu principal\n";
        cin >>opc;
        switch(opc){
    //    case 1:insertarEquipo();break;
    //    case 2:bajarEquipo();break;
    //    case 3:modificarEquipo();break;
        }
    }while (opc!=4);
}

void administrarPartidos(){
    int opc;
    do{
        cout <<"ADMINISTRAR PARTIDOS:\n";
        cout <<"\t1:Para registrar el inicio \t2:Para registrar gol \t3:Para registrar el fin \t4:Volver al menu princial"<<endl;
        cin >>opc;
        switch(opc){
    //case 1:registrarInicio();break;
    //case 2:registrarGol();break;
    //case 3:registrarFin();break;
    }
    }while (opc!=4);
}


void procesarReportes(){
    //lista goleadores,equipos por grupo,lista fixture,grupo de la muerte,porcentaje goles local,menuprincipal
    int opc;
    do{
        cout <<"PROCESAR REPORTES:\n";
        cout <<"\t1: Lista de goleadores\t2: Equipos por grupo\t3: Lista fixture\t4: Grupo de la muerte\t5: Porcentaje de goles por local\t6:Menu Principal\n";
        cin >>opc;
        switch (opc){
    //    case 1:ListaGoleadores();break;
    //    case 2:EquiposGrupo();break;
    //    case 3:ListaFixture();break;
    //    case 4:GrupoMuerte();break;
    //   case 5:PorcentajeGolesLocal();break;
        }
    }while (opc!=6);
}



