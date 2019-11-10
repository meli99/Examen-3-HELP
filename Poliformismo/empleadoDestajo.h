
#ifndef EMPLEADODESTAJO_H
#define EMPLEADODESTAJO_H

#include "empleado.h"

class empleadoDestajo : public empleado {
public:
    empleadoDestajo(std::string, std::string, std::string, double, double);
    virtual double salarioNeto() const;
    virtual std::string toString() const;
    virtual string toStringArchivo();

private:
    double _salarioHora;
    double _horasTrabajadas;
    std::string tipo;
};

#endif /* EMPLEADODESTAJO_H */

