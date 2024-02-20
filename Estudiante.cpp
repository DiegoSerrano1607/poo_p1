#include <iostream>
#include "Persona.cpp" //incluir el nombre del archivo del cual se va a heredar junto con su extension .cpp//
using namespace std; 
class Estudiante : Persona{
	//atributos 
	private : string carnet;
	//constructor
	public : 
		Estudiante(){
		}
		Estudiante(string nom, string ape, string dir, string fn, string car, int tel) : Persona(nom, ape, dir, fn, tel){
			carnet = car;
		}
	//metodos 
	void leer(){
		cout<<carnet<<endl;
		cout<<nombres<<endl;
		cout<<apellidos<<endl;
		cout<<direccion<<endl;
		cout<<telefono<<endl;
		cout<<fecha_nacimiento<<endl;
	}	
};
