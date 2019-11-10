/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodo.h
 * Author: ESCINF
 *
 * Created on 31 de octubre de 2019, 16:01
 */

#ifndef NODO_H
#define NODO_H
#include "empleado.h"
#include <sstream>
using std::string;
class empleado;
class nodo;

class nodo {
public:
    nodo(empleado*,nodo*);
    virtual ~nodo();
    virtual nodo* obtenerSiguiente();
    virtual empleado* obtenerDato();
    virtual void fijarSiguiente(nodo*);
    virtual void fijarDato(empleado*);
private:
    nodo* siguiente;
    empleado* dato;


};

#endif /* NODO_H */

