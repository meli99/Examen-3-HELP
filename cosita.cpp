#include <iostream>
#include <sstream>
#include <stdlib.h> 
#include <fstream>

using namespace std;
class Meli {
private:
	string Gio;
public:
	Meli() {
		Gio = "_";
	}
	void setGio(string Gio) {
		Gio = Gio;
	}
	string getGio() {
		return Gio;
	}
};

int main() {
	string Gio;
	Meli objeto;
	cout << "Holi" << endl;
	cout << "Esta cosa existe para que Meli aprenda a hacer cositos txt tons!" << endl;
	cout << "Escribe tu palabra para verla :v adaaaaaaaaaaaaa" << endl;
	cin >> Gio;
	objeto.setGio(Gio);
	cout << "Ahora esto es lo que esta escrito en el chunchito txt" << endl;

	string linea;

	ifstream datosTxt;
	datosTxt.open("jeje.txt");
	while (!datosTxt.eof()) {
		datosTxt >> linea;
		cout << linea + "\n";
	}

	datosTxt.close();

	//amor! ahora es tu turno de enseñarme! has que pueda ver el archivo txt aqui y podre ver como lo llamas :D
	//cout<<COSA QUE SE SUPONE QUE ESTOY APRENDIENDO EN FORMA DE TXT<<endl;
	cout << "Gio dijo:" << objeto.getGio();
	cout << "\n";
	cout << "Bye bye :*" << endl;
	return 0;
}

