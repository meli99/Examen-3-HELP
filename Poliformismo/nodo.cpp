/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodo.cpp
 * Author: ESCINF
 * 
 * Created on 31 de octubre de 2019, 16:01
 */

#include "nodo.h"
using std::stringstream;
nodo::nodo(empleado* dato, nodo* siguiente)
    : dato(dato), siguiente(siguiente) {
}

nodo::~nodo() {
//    if(dato != NULL){
//      delete dato;  
//    }
//    
//    if(siguiente != NULL){
//        delete siguiente;
//    }
}

empleado* nodo::obtenerDato(){
    return dato;
}

nodo* nodo::obtenerSiguiente(){
    return siguiente;
}


void nodo::fijarSiguiente(nodo* sig){
    siguiente = sig;
}

void nodo::fijarDato(empleado* p) {
    dato = p;
}
