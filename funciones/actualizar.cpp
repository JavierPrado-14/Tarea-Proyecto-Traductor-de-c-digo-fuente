#include <iostream>
#include <string.h>
#include <fstream>
#include <windows.h>
#include "leer.cpp"

using namespace std;

void leer();

void actualizar(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE) ;
	SetConsoleTextAttribute (hConsole, 32);
	FILE* archivo = fopen(n_archivo,"r+b");
	int id;
	Traductor traductor;
	string esp,in,fun;
	cout<<"Ingrese el ID de la palabra que desea modificar: ";
	cin>>id;
	fseek(archivo,id * sizeof(Traductor),SEEK_SET);
		cout<<"Cual es el numero de la palabra que desea modificar: ";
		cin>>traductor.num;
		cin.ignore();
		cout<<"Ingrese la nueva palabra en ingles: ";
		getline(cin,in);
		strcpy(traductor.in,in.c_str());
		cout<<"Ingrese la traduccion de la palabra en espanol: ";
		getline(cin,esp);
		strcpy(traductor.esp,esp.c_str());
		cout<<"Cual seria la funcionalidad de la palabra ingresada: ";
		getline(cin,fun);
		strcpy(traductor.fun,fun.c_str());
		cin.ignore();

	fwrite(&traductor,sizeof(Traductor),1,archivo);
	fclose(archivo);
	leer();
}

//actualizacion
