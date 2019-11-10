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
	string linea; string Gio;
	Meli cuc;
	cin>>Gio;
	cout<<"\n";
	cuc.setGio(Gio);
	cout<<cuc.getGio();
	cout<<"El txt dice: "<<endl;
	ifstream objetotrue;
	objetotrue.open("jeje.txt");
	while(!objetotrue.eof()){
		objetotrue>> linea;
		cout<<linea+"\n";
	}
	objetotrue.close();
		
	return 0;
}

