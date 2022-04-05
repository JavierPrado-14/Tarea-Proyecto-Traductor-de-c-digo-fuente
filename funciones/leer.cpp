#include <iomanip> // se agrego libreria para tabular el ID y el NO
#include <iostream>
#include <string.h>
#include <fstream>
#include "crear.cpp"


using namespace std;
void menu();
void leer(){
		system("cls");
		FILE* archivo = fopen(n_archivo,"rb");
		if (!archivo){
			archivo = fopen(n_archivo,"w+b");
		}
		Traductor traductor;
		int id=0;
		fread(&traductor,sizeof(Traductor),1,archivo);
		cout<<"---------------------------------------------------------------"<<endl;
		cout<<"|            Listado de Palabras con su funcion               |"<<endl;
		do{
		cout<<"---------------------------------------------------------------"<<endl;


    cout<<"Id: "<<id;
    cout<<setw(20);
		cout<<"No. "<<traductor.num<<endl;
		std::cout << '\n';
		cout<<"Palabra en Ingles: "<<traductor.in<<endl;
		cout<<"Palabra en Espanol: "<<traductor.esp<<endl;
		std::cout << '\n';
		cout<<"--------------Funcionalidad----------------"<<endl;
		std::cout << '\n';
		std::cout <<traductor.fun << '\n';
		fread(&traductor,sizeof(Traductor),1,archivo);
		id+=1;
		}while(feof(archivo)==0);
		fclose(archivo);
		cout<<endl;

		//readforiginal();
		system("pause");
		menu();
}
