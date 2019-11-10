/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lista.cpp
 * Author: ESCINF
 * 
 * Created on 31 de octubre de 2019, 16:08
 */

#include "lista.h"
#include <sstream>
using std::stringstream;
lista::lista():primero(NULL),actual(NULL),cantidad(0) {
}
void lista::agregarempleado(empleado* p) {
    
    nodo* actual;
    nodo* nuevoNodo;
    if(primero==NULL){
    primero  = new nodo(p,NULL);
    cantidad++;
}else{
    actual=primero;

    while(actual->obtenerSiguiente()!=NULL){
        actual=actual->obtenerSiguiente();
    }

    nuevoNodo=new nodo(p,NULL);
    actual->fijarSiguiente(nuevoNodo);
    cantidad++;
}
 
}

lista::~lista() {
}
int lista::getCant(){
    return cantidad;
}
void lista::setCant(int cant){
    cantidad = cant;
}


string lista::toString() {
    stringstream r;
    nodo* actual = primero;
    empleado* _empleado;
    
    while(actual != NULL){
        _empleado= actual->obtenerDato();
        r << _empleado->toString();
        actual = actual->obtenerSiguiente();
    }
    
    return r.str();
}


void lista::inicializarActual(){
    actual=primero;
}

empleado* lista::recuperarempleado() {
    empleado* p = actual->obtenerDato();
    actual = actual->obtenerSiguiente();
    return p;
}