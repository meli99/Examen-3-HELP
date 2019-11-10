/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lista.h
 * Author: ESCINF
 *
 * Created on 31 de octubre de 2019, 16:08
 */

#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include <sstream>
using std::string;
class lista{
public:
      lista();
    ~lista();
    virtual void agregarempleado(empleado*);
    virtual string toString();
    virtual int getCant();
    virtual void setCant(int);
    virtual void inicializarActual();
    virtual empleado*recuperarempleado();
private:
    nodo* primero;
    nodo* actual;
    int cantidad;

};

#endif /* LISTA_H */

