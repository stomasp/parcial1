#include "Estudiante.cpp"
#include <iostream>
using namespace std;

main(){
	string nombre, apellido;
	int codigo, not1, not2, not3, not4;
	
	string nombre2, apellido2;
	int codigo2, no1, no2, no3, no4;
	
	string nombre3, apellido3;
	int codigo3, nott1, nott2, nott3, nott4;
	int cant;
	float promedio, promedio2, promedio3;
	//alumno 1
	cout<<"***Ingrese datos de Alumno 1 ***"<<endl;
	cout<<"Ingrese Codigo: ";
	cin>>codigo;
	cout<<"Ingrese Nombre: ";
	cin>>nombre;
	cout<<"Ingrese Apellido: ";
	cin>>apellido;
	cout<<"Ingrese Nota 1: ";
	cin>>not1;
	cout<<"Ingrese Nota 2: ";
	cin>>not2;
	cout<<"Ingrese Nota 3: ";
	cin>>not3;
	cout<<"Ingrese Nota 4: ";
	cin>>not4;
	promedio=(not1+not2+not3+not4)/4;
	
	//alumno 2
	cout<<"***Ingrese datos de Alumno 2 ***"<<endl;
	cout<<"Ingrese Codigo: ";
	cin>>codigo2;
	cout<<"Ingrese Nombre: ";
	cin>>nombre2;
	cout<<"Ingrese Apellido: ";
	cin>>apellido2;
	cout<<"Ingrese Nota 1: ";
	cin>>no1;
	cout<<"Ingrese Nota 2: ";
	cin>>no2;
	cout<<"Ingrese Nota 3: ";
	cin>>no3;
	cout<<"Ingrese Nota 4: ";
	cin>>no4;
	promedio2=(no1+no2+no3+no4)/4;
	
	//alumno 3
		cout<<"Ingrese datos de Alumno 3 "<<endl;
	cout<<"Ingrese Codigo: ";
	cin>>codigo3;
	cout<<"Ingrese Nombre: ";
	cin>>nombre3;
	cout<<"Ingrese Apellido: ";
	cin>>apellido3;
	cout<<"Ingrese Nota 1: ";
	cin>>nott1;
	cout<<"Ingrese Nota 2: ";
	cin>>nott2;
	cout<<"Ingrese Nota 3: ";
	cin>>nott3;
	cout<<"Ingrese Nota 4: ";
	cin>>nott4;
	promedio3=(nott1+nott2+nott3+nott4)/4;
	
	//intancia de un objeto
	Estudiante obj=Estudiante(codigo, nombre,apellido,not1,not2,not3,not4,promedio,codigo2,nombre2,apellido2,no1,no2,no3,no4,codigo3,nombre3,apellido3,nott1,nott2,nott3,nott4,promedio2,promedio3);
	obj.mostrar();
	
	cout<<"Ingrese el cambio de Codigo de alumno 1"<<endl;
	cin>>codigo;
	obj.setCodigo(codigo);
	obj.mostrar();
}
















