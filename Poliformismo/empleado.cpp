
#include <sstream>
using namespace std;

#include "empleado.h"

empleado::empleado(string id, string apellido, string nombre)
: _id(id), _apellido(apellido), _nombre(nombre) {
}

string empleado::getID(){
    return _id;
}

string empleado::getNombre(){
    return _nombre;
}

string empleado::getApellido(){
    return _apellido;
}

string empleado::toString() const {
    stringstream r;
    r << _id << ","  << _apellido << "," << _nombre ;
    return r.str();
}

string empleado::toStringArchivo() const {
    stringstream r;
    r << _id << "\t"  << _apellido << "\t" << _nombre ;
    return r.str();
}