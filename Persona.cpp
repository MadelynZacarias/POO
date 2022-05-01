#include <iostream>
using namespace std;
class Persona{
	//atributos
	protected : string nombre,apellido,direccion,email,fecha_nacimiento;
				int telefono;
	//constructor
	protected : 
	  		Persona(){
	  		}
	  		Persona(string nom,string ape,string dir,string ema,string fn,int tel){
	  			nombre = nom;
	  			apellido = ape;
	  			direccion = dir;
	  			fecha_nacimiento = fn;
	  			email = ema;
	  			telefono = tel;
	  		}
	//metodo
	void mostrar(); 
};
