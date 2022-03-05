#include <iostream>
using namespace std;

class Usuario{
	protected: int codigo, codigo2,codigo3; 
	string nombre, apellido, nombre2, apellido2, nombre3, apellido3;
	 int nota1, nota2, nota3, nota4;
	 int ca1,ca2, ca3, ca4;
	 int cali1, cali2, cali3, cali4;
	//constructor
	protected: 
	Usuario(int cod, string nom, string ape, int n1, int n2, int n3, int n4,int cod2, string nom2, string ape2, int c1, int c2, int c3, int c4, int cod3, string nom3, string ape3, int cal1, int cal2, int cal3, int cal4){
		codigo=cod;
		nombre=nom;
		apellido=ape;	
		nota1=n1;
		nota2=n2;
		nota3=n3;
		nota4=n4;
		
		codigo2=cod2;
		nombre2=nom2;
		apellido2=ape2;
		ca1=c1;
		ca2=c2;
		ca3=c3;
		ca4=c4;
		
		codigo3=cod3;
		nombre3=nom3;
		apellido3=ape3;
		cali1=cal1;
		cali2=cal2;
		cali3=cal3;
		cali4=cal4;
	}
	void mostrar(){
		
	}	
};
