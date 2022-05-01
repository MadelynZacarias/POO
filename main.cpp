#include "Estudiante.cpp"
#include <iostream>
using namespace std;
main(){
	string carnet,nombre,apellido,direccion,email,fecha_nacimiento;
	int telefono;
	
	cout<<"Ingrese Carnet del Estudiante: ";
	cin>>carnet;
	cout<<"Ingrese Nombre del Estudiante: ";
	cin>>nombre;
	cout<<"Ingrese Apellido del Estudiante: ";
	cin>>apellido;
	cout<<"Ingrese Direccion del Estudiante: ";
	cin>>direccion;
	cout<<"Ingrese Email del Estudiante: ";
	cin>>email;
	cout<<"Ingrese Fecha de nacimiento del Estudiante: ";
	cin>>fecha_nacimiento;
	cout<<"Ingrese Telefono del Estudiante: ";
	cin>>telefono;
	// instancia de un objeto
	Estudiante obj = Estudiante(nombre,apellido,direccion,email,fecha_nacimiento,telefono,carnet);
	obj.mostrar();
}
