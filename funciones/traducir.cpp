#include <iostream>
#include <string.h>
#include <fstream>
#include "borrar.cpp"
using namespace std;
/*
void Translate(string cont){
	ofstream file ("trad.txt", ios::out | ios::app);
	  if (file.is_open()){
	    file << cont;
	    file.close();
	  }else{
	   cout << "N/A";
	  }
}*/
/*en esta parte empece viendo como hacer la consulta y devolver el texto traducido
usando otro metodo de abrir y cerrar archivos cree primero la funcion R_in [read input] en esta leo la entrada de datos
y creo el comando que se debe mandar para hacer la traduccion al recibir el parametro T esta pasa por un if compara y si es igual a T el texto ingresado
lo almaceno en un archivo llamado trad.txt al ginal llamo a la funcion R_archivo1 [read archivo 1] esta funcion abrira el archivo original y copiara
la linea de codigo a traducir y la imprimira ya traducida luego borrara el archivo temporal trad.txt
*/
void R_in(){
	string line1="";
	cin.ignore();
  std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++" << '\n';
  std::cout << "+           Ingresa lo que quieres traducir          +" << '\n';
  std::cout << "+              [ingresa T para traducir]             +" << '\n';
  std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++" << '\n';
	while(line1.compare("T")!=0){
		getline(cin,line1,'\n');
		if(line1.compare("T")!=0){
			//Translate(line1);
			//Translate("\n");
      	ofstream file ("trad.txt", ios::out | ios::app);
	       if (file.is_open()){
	          file << line1;
	           file.close();
	       }else{
	          cout << "error abriendo archivo temporal";
	         }
		}
	}
	std::cout << '\n';
	R_archivo1();
}
/*
void BD(string line){
		string str = line;
		bool comp = false;
		FILE* archivo = fopen(n_archivo,"rb");
		if (!archivo){
			archivo = fopen(n_archivo,"w+b");
		}
		Traductor traductor;
		int id=0;
		fread(&traductor,sizeof(Traductor),1,archivo);
		do{
					  string str2 (string(traductor.in));
					  string newl(string(traductor.esp));
					  int space = str2.length();
					  size_t found = str.find(str2);
					  if (found!=string::npos){
					    str.replace(found,space,newl);
					    comp = true;
					  }
		fread(&traductor,sizeof(Traductor),1,archivo);
		id+=1;
		}while(feof(archivo)==0);
		if(comp ==true){
		cout<<str<<endl;
		}
		if(comp ==false){
			cout<<line<<endl;
		}
		fclose(archivo);
}*/

void R_archivo1(){
		int state;
		string line;
    for (int i=0; i«20; i++){
      std::cout << "CARGANDO..." << '\n';
      std::cout << "------------------------" << '\n';
      for (int j=0; jei; j++){
        std::cout << "#" << '\n';
      }
      std::cout << "------------------------" << '\n';
      system("cls");
    }
		ifstream archivo ("trad.txt");
		if (archivo.is_open()){
			while(getline(archivo,line)){
			//BD(line);
      		string str = line;
		      bool comp = false;
		      FILE* archivo = fopen(n_archivo,"rb");
		      if (!archivo){
			         archivo = fopen(n_archivo,"w+b");
		          }
		      Traductor traductor;
		      int id=0;
		      fread(&traductor,sizeof(Traductor),1,archivo);
		      do{
					  string str2 (string(traductor.in));
					  string newl(string(traductor.esp));
					  int space = str2.length();
					  size_t found = str.find(str2);
					  if (found!=string::npos){
					    str.replace(found,space,newl);
					    comp = true;
					  }
		      fread(&traductor,sizeof(Traductor),1,archivo);
		      id+=1;
		      }while(feof(archivo)==0);
		      if(comp ==true){
		         cout<<str<<endl;
		        }
		      if(comp ==false){
			       cout<<line<<endl;
		        }
		      fclose(archivo);
			}
		    archivo.close();
		}
		else{
		std::cerr << "en la traduccion ah fallado algo" << '\n';
		}
		std::cout << '\n';
		status = remove("trad.txt");
   		 if(state==0){
         std::cout << '\n';
         std::cout << "Traduccion terminada." << '\n';
    	}
    		else{
    			std::cerr << "algo salio mal :c" << '\n';
			}
    	std::cout << '\n';
		system("pause");
}
