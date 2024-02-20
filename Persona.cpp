#include <iostream>
using namespace std; 
class Persona{
	//atributos: nombres, apellidos, dirección, telefono, fecha_nacimiento
	protected : string nombres, apellidos, direccion, fecha_nacimiento;
	int telefono; 
	
	// contructor
	Persona (){
	}
	
	Persona(string nom, string ape, string dir, string fn, int tel){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		fecha_nacimiento = fn;       //mismo nombre que la declaracion de variables        
	}
	// metodos crud = crear, leer, actualizar, borrar
	
	void crear();
	void leer();
	void actualizar();
	void borrar();
};
