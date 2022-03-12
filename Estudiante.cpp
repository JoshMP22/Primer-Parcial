#include<iostream>
using namespace std;

class Estudiante{
	
	protected : 
				string codigo, nombres, apellidos;
				

	protected:
				Estudiante(){
				}
				Estudiante(string cod, string nom, string ape){
					codigo= cod;
					nombres= nom;
					apellidos= ape;
				}
	

	void mostrar();
	
}; 
