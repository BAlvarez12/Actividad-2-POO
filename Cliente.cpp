#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {

	private : string nit;
	
	//constructor
	public : 
	cliente (){
	}
	
	Cliente (string nom,string ape,string dir,string fec_nacimiento,int tel, string n) : Persona(nom,ape,dir,fec_nacimiento,tel) {
		nit = n;
	}
};
