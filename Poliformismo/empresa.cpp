/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   empresa.cpp
 * Author: ESCINF
 * 
 * Created on 31 de octubre de 2019, 16:39
 */

#include "empresa.h"
#include "gestorArchivos.h"

empresa::empresa(string vida):gestor(new gestorArchivos(vida)),listita(new lista()) {
}


string empresa::listarEmpleados() {
    return listita->toString();
}

void empresa::agregarEmpleado(empleado* p) {
    listita->agregarempleado(p);
}



void empresa::recuperarDatosAplicacion() {
    gestor->abrirFlujoModoLectura();
    listita = gestor->recuperarListaEmpleado();
    gestor->cerrarFlujo();
}

void empresa::guardarDatosAplicacion() {
    gestor->abrirFlujoModoEscritura();
    gestor->guardarListaEmpleado(listita);
    gestor->cerrarFlujo();
}

empresa::~empresa() {
    delete gestor;
    delete listita;
}

