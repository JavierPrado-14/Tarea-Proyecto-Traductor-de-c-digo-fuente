//funcion para la eliminacion de una palabra (suplementacion)
// estructura defuncion borar
// se ereda de la estructura traductor
//nom_archivo_temporal es el nombre del archivo auxiliar

#include <iostream>
#include <string.h>
#include <fstream>
#include "leer.cpp"

using namespace std;

const char *nom_archivo_temporal = "archivo_tem.dat";

void leer();


void eliminar_linea(){

    //declaracion de variables
        FILE *archivo, *archivo_tem;
        int num;
    //declaracion estructura del traductor
        Traductor traductor;

    //abrir archivo temporal
        archivo_tem = fopen(nom_archivo_temporal, "w+b");
    //abrir archivo original
        archivo = fopen(n_archivo, "rb");

    //pedir numero de linea a eliminar
        cout << "Numero de linea a eliminar: "; 
        cin >> num;

    //leer archivo original
        while(fread(&traductor, sizeof(Traductor), 1, archivo)){
            if(traductor. num != num){
                fwrite(&traductor, sizeof(Traductor), 1, archivo_tem);
            }
        }
    //cerrar archivo temporal
        fclose(archivo_tem);
    //cerrar archivo original
        fclose(archivo);

    //abrir archivo temporal
        archivo_tem= fopen(nom_archivo_temporal, "rb");
    //abrir archivo original
        archivo= fopen(n_archivo, "wb");

    //recorremos el archivo temporal copiando los datos al archivo original
        while(fread(&traductor, sizeof(Traductor), 1, archivo_tem))
        {
    //ecribimos en el archivo original los datos del archivo temporal
            fwrite(&traductor, sizeof(Traductor), 1, archivo);
        }

    //cerrar archivo temporal
        fclose(archivo_tem);
    //eliminar archivo temporal
        remove("archivo_tem.dat");
    //cerrar archivo original
        fclose(archivo);

    //mostrar los registros del archivo
    //comunicamos con la funcion leer que se encargara de mostrar los registros
       leer();
}
