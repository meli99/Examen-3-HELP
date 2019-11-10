
#include <iomanip>
#include <sstream>
using namespace std;

#include "empleadoFijo.h"

empleadoFijo::empleadoFijo(string id, string apellido, string nombre, double salario)
: empleado(id, apellido, nombre), _salario(salario),tipo("1") {

}

double empleadoFijo::salarioNeto() const {
    return _salario * (1.0 - PORCENTAJE_DEDUCCIONES);
}

const double empleadoFijo::PORCENTAJE_DEDUCCIONES = 0.12;

string empleadoFijo::toString() const {
    stringstream r;
    r << empleado::toString() <<"\n";
    r<<"Salario: " << setprecision(2) << fixed << _salario<<"\n";
    r << "Tipo de empleado: "<<tipo<< "\n";
    return r.str();
}

string empleadoFijo::toStringArchivo(){
    stringstream r;
    r <<empleado::getID()<< "\t" << empleado::getApellido()<< "\t"<<empleado::getNombre()<<"\t"<<tipo<<"\t"<<_salario;   
    return r.str();
}
