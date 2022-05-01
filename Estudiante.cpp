#include "Persona.cpp"
#include <iostream>
using namespace std;

class Estudiante : Persona {
	//atributos
	private : string carnet; 
	
	//constructor
	public : 
	Estudiante (){
	}
	
	Estudiante(string nom,string ape,string dir,string ema,string fn,int tel,string car) : Persona(nom,ape,dir,ema,fn,tel){
		carnet = car;
	}
	void mostrar(){
		cout<<"______________________"<<endl;
		cout<<carnet<<","<<nombre<<","<<apellido<<","<<direccion<<","<<email<<","<<fecha_nacimiento<<","<<telefono<<endl;
	}
};
