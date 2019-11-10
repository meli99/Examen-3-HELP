/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gestorArchivos.h
 * Author: ESCINF
 *
 * Created on 31 de octubre de 2019, 16:31
 */

#ifndef GESTORARCHIVOS_H
#define GESTORARCHIVOS_H
#include <sstream>
#include "empresa.h"
#include "empleado.h"
#include "empleadoDestajo.h"
#include "empleadoFijo.h"
#include "lista.h"
using std::string;
#include <fstream>
using namespace std;
class empresa;
class gestorArchivos;


class gestorArchivos {
public:
    gestorArchivos(string);
   
    virtual ~gestorArchivos();
        //****Paso 1****
    virtual void abrirFlujoModoEscritura();
    virtual void abrirFlujoModoLectura();
    virtual void cerrarFlujo();
    
        //****Paso 2****
    static int obtenerInt(std::string);
    static float obtenerfloat(std::string);
    static double obtenerDouble(std::string);
    
       //****Paso 3***
    virtual void guardarInt(int,char);
    virtual void guardarFloat(float,char);
    virtual void guardarString(string, char);
    virtual void guardarDouble(double,char);
    
    virtual int recuperarInt(char);
    virtual float recuperarfloat(char);
    virtual string recuperarString(char);
    virtual double recuperarDouble(char);
    
    
       //****Paso 4*****
    virtual empleado* recuperarEmpleado();
    virtual void guardarEmpleado(empleado*);
   
    
    
    //****Paso 5****
    virtual void guardarListaEmpleado(lista*);
    virtual lista* recuperarListaEmpleado();
   
private:
    string ruta;
    fstream archivo;

};

#endif /* GESTORARCHIVOS_H */

