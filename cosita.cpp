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
		Meli::Gio = Gio;
	}
	string getGio() {
		return Gio;
	}
};

int main() {
	string Gio; string linea;
	Meli objeto;
	cout << "Holi" << endl;
	cout << "Esta cosa existe para que Meli aprenda a hacer cositos txt tons!" << endl;
	cout << "Escribe tu palabra para verla :v adaaaaaaaaaaaaa" << endl;
	cin >> Gio;
	objeto.setGio(Gio);
	cout << "Ahora esto es lo que esta escrito en el chunchito txt" << endl;
	ifstream datosTxt;
	datosTxt.open("jeje.txt");
	while (!datosTxt.eof()) {
		datosTxt >> linea;
		cout << linea + "\n";
	}
	datosTxt.close();
	cout << "Gio dijo:" << objeto.getGio();
	cout << "\n";
	cout << "Bye bye :*" << endl;
	return 0;
}

