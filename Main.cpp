#include <iostream>
#include "Estudiante.cpp"
using namespace std;
main(){
	//instanciar el objeto a la clase
	Estudiante estudiante  = Estudiante("Diego", "Serrano", "Guatemala", "2024-02-18", "5790", 473);
	estudiante.leer();
	
}
