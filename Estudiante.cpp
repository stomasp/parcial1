#include "Usuario.cpp"
#include <iostream>
using namespace std;

class Estudiante : Usuario{
	//atributos
	private: float promedio, promedio2, promedio3;
	
	//constructor
	public :
	//	Estudiante (){
	//	}
Estudiante(int cod, string nom, string ape, int n1, int n2, int n3, int n4, float prome,int cod2, string nom2, string ape2, int c1, int c2, int c3, int c4, int cod3, string nom3, string ape3, int cal1, int cal2, int cal3, int cal4,float prome2, float prome3) : Usuario(cod,nom,ape,n1,n2,n3,n4,cod2,nom2,ape2,c1,c2,c3,c4,cod3,nom3,ape3,cal1,cal2,cal3,cal4){
		promedio=prome;	
		promedio2=prome2;
		promedio3=prome3;
		
		promedio=(nota1+nota2+nota3+nota4)/4;
		promedio2=(ca1+ca2+ca3+ca4)/4;
		promedio3=(cali1+cali2+cali3+cali4)/4;

		}
		//metodo set(modificar)
		void setCodigo(int cod){codigo=cod;}
		void setNombre(string nom){nombre=nom;}
		void setApellido(string ape){apellido=ape;}
		void setNota1(int n1){nota1=n1;}
		void setNota2(int n2){nota1=n2;}
		void setNota3(int n3){nota1=n3;}
		void setNota4(int n4){nota1=n4;}

		//metodo get(mostrar)
		 int getCodigo( ){return codigo;}
		 string getNombre( ){return nombre;}
		 string getApellido( ){return apellido;}
		 int getNota1( ){return nota1;}
		 int getNota2( ){return nota1;}
		 int getNota3( ){return nota1;}
		 int getNota4( ){return nota1;}
			
void mostrar(){
		cout<<"_______________________________________"<<endl;
		cout<<"Mostrando datos Ingresados de Alumno 1"<<endl;
cout<<codigo<<","<<nombre<<","<<apellido<<","<<nota1<<","<<nota2<<","<<nota3<<","<<nota4<<"Elpromedio es: "<<promedio<<" "<<(promedio >60?" Aprobado":" Reprobado")<<endl;

	cout<<"_______________________________________"<<endl;
		cout<<"Mostrando datos Ingresados de Alumno 2"<<endl;
	cout<<codigo2<<" , "<<nombre2<<" , "<<apellido2<<" , "<<ca1<<" , "<<ca2<<" , "<<ca3<<" , "<<ca4<<" Elpromedio es: "<<promedio2<<" "<<(promedio2 >60?" Aprobado":" Reprobado")<<endl;

	cout<<"_______________________________________"<<endl;
		cout<<"Mostrando datos Ingresados de Alumno 3"<<endl;
	cout<<codigo3<<" , "<<nombre3<<" , "<<apellido3<<" , "<<cali1<<" , "<<cali2<<" , "<<cali3<<" , "<<cali4<<" Elpromedio es: "<<promedio3<<" "<<(promedio3 >60?" Aprobado":" Reprobado")<<endl;
	}	
}; 
