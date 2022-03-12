#include<iostream>
#include "Estudiante.cpp"
using namespace std;

class Curso: Estudiante {
	
	protected: string ncurso, estatus;
				int nota1, nota2, nota3, nota4, promedio; 
				
	public:
	Curso(){
	}
	
	Curso(string cod, string nom, string ape, string nc, int n1, int n2, int n3, int n4, int pro, string est):Estudiante(cod, nom,ape){
		ncurso=nc;
		nota1=n1;
		nota2=n2;
		nota3=n3;
		nota4=n4;
		promedio=pro;
		estatus=est;
		
	}
	
	void setCodigo(string cod){codigo = cod;	}
	void setNombres(string nom){nombres = nom;	}
	void setApellidos(string ape){apellidos = ape;	}
	void setNcurso(string nc){ncurso = nc;	}
	void setNota1(int n1){nota1 = n1;	}
	void setNota2(int n2){nota2 = n2;	}
	void setNota3(int n3){nota3 = n3;	}
	void setNota4(int n4){nota4 = n4;	}
	void setPromedio(int pro){promedio=pro;	}
	void setEstatus(string est){estatus=est;	}

	
	string getCodigo(){return codigo; }
	string getNombres(){return nombres; }
	string getApellidos(){return apellidos; }
	string getNcurso(){return ncurso; }
	int getNota1(){ return nota1;}
	int getNota2(){ return nota2;}
	int getNota3(){ return nota3;}
	int getNota4(){ return nota4;}
	int getPromedio(){return promedio;}
	string getEstatus(){return estatus;}
	
	
	void mostrar(){
		cout<<" ______________________________________________________________________________ "<<endl;	
		cout<<"| "<<endl;
		cout<<"|                            PROMEDIO DE NOTAS"<<endl;
		cout<<"| "<<endl;
		cout<<"|   Codigo: "<<codigo<<endl;
		cout<<"| "<<endl;
		cout<<"|   Nombre Completo:  "<<nombres<<" "<<apellidos<<endl;
		cout<<"|______________________________________________________________________________"<<endl;
		cout<<"|                       **** "<<ncurso<<" ****"<<endl;
		cout<<"|______________________________________________________________________________"<<endl;
		cout<<"|  NOTA 1  |  NOTA 2 |  NOTA 3 | NOTA 4 |  PROMEDIO |        ESTATUS"<<endl;
		cout<<"|__________|_________|_________|________|___________|__________________________"<<endl;
		cout<<"|    "<<nota1<<"         "<<nota2<<"        "<<nota3<<"       "<<nota4<<"        "<<promedio<<"             "<<estatus<<endl;
		cout<<"|______________________________________________________________________________"<<endl;
		
		system ("pause");
		system("cls");
	}
	
	
};
