
#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <sstream>
using std::string;
class empleado {
public:
    empleado(std::string, std::string, std::string);
    virtual double salarioNeto() const = 0;
    virtual std::string toString() const;
    virtual string getNombre();
    virtual string getID();
    virtual string getApellido();
      virtual std::string toStringArchivo() const;

private:
    std::string _id;
    std::string _apellido;
    std::string _nombre;
};


#endif /* EMPLEADO_H */

