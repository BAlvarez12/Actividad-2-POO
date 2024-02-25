#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona { 
	private : int codigo_empleado; 
	string puesto ;
	  
	public : Empleado (){
	}
	Empleado (string nom, string ape, string dir, int tel, string fec_nacimiento, int ca, string pu)
	: Persona (nom, ape, dir,  fec_nacimiento, tel){
		codigo_empleado = ca ;
		puesto = pu ;
	} 
	void leer (){
		cout << nombres << endl; 
		cout << apellidos<<endl;
		cout <<direccion<<endl; 
		cout << telefono<<endl; 
		cout << fecha_nacimiento<<endl;
		cout << codigo_empleado <<endl;
		cout << puesto<<endl;
	}
};
