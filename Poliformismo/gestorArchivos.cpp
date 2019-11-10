/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gestorArchivos.cpp
 * Author: ESCINF
 * 
 * Created on 31 de octubre de 2019, 16:31
 */

#include "gestorArchivos.h"
#include  <typeinfo>
#include <iostream> 

gestorArchivos::gestorArchivos(string ruta):ruta(ruta) {
}



gestorArchivos::~gestorArchivos() {
}

//--------------Paso 1-----------------------------

void gestorArchivos::abrirFlujoModoEscritura(){
    archivo.open(ruta.c_str(), ios::out);
}

void gestorArchivos::abrirFlujoModoLectura(){
    archivo.open(ruta.c_str(), ios::in);
}

void gestorArchivos::cerrarFlujo(){
    archivo.close();
}

//--------------Paso 2-----------------------------

int gestorArchivos::obtenerInt(std::string s){
    int v;
    std::stringstream r(s);
    r >> v;
    return v;
}
float gestorArchivos::obtenerfloat(std::string s){
    float v;
    std::stringstream r(s);
    r >> v;
    return v;
}

double gestorArchivos::obtenerDouble(std::string s){
    double v;
    std::stringstream r(s);
    r >> v;
    return v;
}


//--------------Paso 3-----------------------------

void gestorArchivos::guardarInt(int i, char delimitador){
    archivo<<i<<delimitador;
}

void gestorArchivos::guardarFloat(float d, char delimitador){
    archivo<<d<<delimitador;
}

void gestorArchivos::guardarString(string s, char delimitador){
    archivo<<s<<delimitador;
}
void gestorArchivos::guardarDouble(double d, char delimitador){
    archivo<<d<<delimitador;
}


int gestorArchivos::recuperarInt(char delimitador){
    string r;
    getline(archivo,r,delimitador);
    return obtenerInt(r);   
}
float gestorArchivos::recuperarfloat(char delimitador){
    string r;
    getline(archivo,r,delimitador);
    return obtenerfloat(r);
}
string gestorArchivos::recuperarString(char delimitador){
    string r;
    getline(archivo,r,delimitador);
    return r;
}
double gestorArchivos::recuperarDouble(char delimitador){
    string r;
    getline(archivo,r,delimitador);
    return obtenerDouble(r);
}

//--------------Paso 4-----------------------------
void gestorArchivos::guardarEmpleado(empleado* p) {
    guardarString(p->toStringArchivo(),'\n');
}

 
empleado* gestorArchivos::recuperarEmpleado(){
    empleado* e=NULL;
    string tipo;
    double ht;
    double ph;
    double salario;
    string id;
    string apellido;
    string nombre;
    id=recuperarString('\t');
    apellido=recuperarString('\t');
    nombre=recuperarString('\t');
    tipo=recuperarString('\t');
    if(tipo=="1"){
        salario=recuperarDouble('\t');
        e=new empleadoFijo(id,nombre,apellido,salario);
        recuperarString('\n');
      
    }else{
        if(tipo=="2"){
            ph=recuperarDouble('\t');
            ht=recuperarDouble('\n');
            e=new empleadoDestajo(id,apellido,nombre,ph,ht);

        }
    }
    return e;
}





void gestorArchivos::guardarListaEmpleado(lista* listaEmpleados) {
    listaEmpleados->inicializarActual();    
    empleado* p;
    
    int n = listaEmpleados->getCant();
    guardarInt(n,'\n');
    
    int i=0; 
    while(i < n){
        p = listaEmpleados->recuperarempleado();
        guardarEmpleado(p);
        i++;
    }
}


lista* gestorArchivos::recuperarListaEmpleado() {
    int cantidadEmpleados;
    lista* listaEmpleados = new lista();
    empleado* p = NULL;
    while(!archivo.eof()){
        p = recuperarEmpleado();
        if(p != NULL){
            listaEmpleados->agregarempleado(p);
        }
    }    
    return listaEmpleados;
}