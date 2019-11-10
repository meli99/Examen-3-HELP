
#include <iomanip>
#include <sstream>
using namespace std;

#include "empleadoDestajo.h"

empleadoDestajo::empleadoDestajo(string id, string apellido, string nombre,
        double salarioHora, double horasTrabajadas)
: empleado(id, apellido, nombre),
_salarioHora(salarioHora), _horasTrabajadas(horasTrabajadas),tipo("2") {

}

double empleadoDestajo::salarioNeto() const {
    return _salarioHora * _horasTrabajadas;
}

string empleadoDestajo::toString() const {
    stringstream r;
    r << empleado::toString() << "\n";
    r << "Tipo de empleado: "<<tipo<< "\n";
    r <<"Salario hora: "<< setprecision(2) << fixed << _salarioHora<<"\n";
    r << "Horas trabajadas: " << _horasTrabajadas<<"\n";
    return r.str();
}

string empleadoDestajo::toStringArchivo(){
    stringstream r;
    r << empleado::getID()<< "\t" << empleado::getApellido()<< "\t"<<empleado::getNombre()<<"\t"<<tipo<<"\t"<<_salarioHora<<"\t"<<_horasTrabajadas;   
    return r.str();
}