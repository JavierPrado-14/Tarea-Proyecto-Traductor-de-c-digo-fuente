//Esta es la opcion crear, en este programa se muestra definiere como Esta
//estructurada la funcion crear.
// la variable num almacena el numero de palabra que deseamos Agregar
// la variable esp amnacena la palabra que en espa;ol
// la variable in almacena la palabra que en ingles
// la variable fun corresponde a la funcion


#include <iostream>
#include <string.h>
#include <fstream>
//n_archivo almacena el nombre del archivo
using namespace std;
const char *n_archivo = "archivo.dat";

// Estructura del traductor
struct Traductor{
	int num;
	char esp[20];
	char in[20];
	char fun[1000];
};

void crear(){
	char continuar;
	FILE* archivo = fopen(n_archivo,"ab");
	Traductor traductor;
	string esp,in,fun;
	do{
		fflush(stdin);
		cout<<"Numero de palabra: ";
		cin>>traductor.num;
		cin.ignore();
		cout<<"Palabra en ingles: ";
		getline(cin,in);
		strcpy(traductor.in,in.c_str());
		cout<<"Palabra en espanol: ";
		getline(cin,esp);
		strcpy(traductor.esp,esp.c_str());
		cout<<"Funcionalidad: ";
		getline(cin,fun);
		strcpy(traductor.fun,fun.c_str());
		cin.ignore();
		fwrite(&traductor,sizeof(Traductor),1,archivo);
		cout<<"Desea Agregar otra palabra (s/n): ";
		cin>>continuar;
	} while ( (continuar=='s') || (continuar=='S') );
	fclose(archivo);
	leer();
}
