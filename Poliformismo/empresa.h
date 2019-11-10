/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   empresa.h
 * Author: ESCINF
 *
 * Created on 31 de octubre de 2019, 16:39
 */

#ifndef EMPRESA_H
#define EMPRESA_H
#include "lista.h"
#include "gestorArchivos.h"
#include <sstream>
using std::string;
class empresa;
class gestorArchivos;
class empresa {
public:
    empresa(string);
    virtual ~empresa();
    virtual void agregarEmpleado(empleado*);
    virtual string listarEmpleados();
    virtual void recuperarDatosAplicacion();
    virtual void guardarDatosAplicacion();
private:
    string vida;
    lista* listita;
    gestorArchivos* gestor;

};

#endif /* EMPRESA_H */

