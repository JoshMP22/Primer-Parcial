#include <iostream>
#include "Curso.cpp"
#include <stdlib.h>

using namespace std;

int main(){
	
	string cod, nom, ape, nc, est;
		int n1, n2, n3, n4, pro; 
		char i;
		
		
		system("color F0");
		
		do{
		fflush(stdin);			
		cout<<"_______________________________________________"<<endl;
		cout<<"CODIGO DE ESTUDIANTE:    ";
		getline(cin,cod);
		cout<<"NOMBRES: ";
		getline(cin,nom);	
		cout<<"APELLIDOS: ";
		getline(cin,ape);
		cout<<"_______________________________________________"<<endl;
		cout<<"NOMBRES DEL CURSO: ";
		getline(cin,nc);	
		cout<<"_______________________________________________"<<endl;
		cout<<"PRIMERA NOTA: ";
		cin>>n1;
		cout<<"SEGUNDA NOTA: ";
		cin>>n2;
		cout<<"TERCER NOTA: ";
		cin>>n3;
		cout<<"CUARTA NOTA: ";
		cin>>n4;
		
		system("cls");
		
		pro=(n1+n2+n3+n4)/4;
		
		if(pro>=60){
		 
		 
		  est="APROBADO";
		}
		else {
		
		  est="REPROBADO";
		  
		}
		

	Curso obj= Curso(cod, nom, ape, nc, n1, n2, n3, n4, pro, est);
	obj.mostrar();
	
	cout<<"DESEA INGRESAR OTRO ESTUDIANTE (s/n): ";
	cin>>i;
	system("cls");
	}while(i=='s' || i=='S');	
	
	return 0;
}
