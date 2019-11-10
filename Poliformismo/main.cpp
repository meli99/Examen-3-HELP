/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: una
 *
 * Created on 31 de octubre de 2019, 01:28 PM
 */

#include <cstdlib>
#include "empresa.h"
#include "empleadoFijo.h"
#include "empleadoDestajo.h"
#include <ostream>
#include <sstream>
#include <iostream>
using std::cout;

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    empresa* empresita=new empresa("INS.txt");
       cout<<"Cargando datos"<<endl;
       empresita->recuperarDatosAplicacion();
       cout<<empresita->listarEmpleados();
    return 0;
}

