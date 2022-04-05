/*este es el menu donde se ejecutara todo el codigo
por el momento solo lleva esto ya que no se ah terminado todas las funciones
*/
//9=blue
//1=dark_blue
//3=dar_aqua
//11=aqua

#include <iostream>
#include <string.h>
#include <fstream>
#include <windows.h>
#include "funciones\traducir.cpp"
using namespace std;


int cont = 0;

void logo();
void menu();
void crear();
void leer();
void actualizar();
void eliminar_linea();
void R_in();

main(){
  logo();
  menu();


}
void logo(){
      HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE) ;
    system("cls");
    SetConsoleTextAttribute (hConsole, 1); std::cout << "+-----------------------------------------------------------------------------------------------+" << '\n';
    SetConsoleTextAttribute (hConsole, 1);std::cout << "|                                                                                               |" << '\n';
    SetConsoleTextAttribute (hConsole, 1);std::cout << "|                                                                                               |" << '\n';
    SetConsoleTextAttribute (hConsole, 1);std::cout << "|    @@@@@@@  @@@@@@@    @@@@@@   @@@@@@@   @@@  @@@   @@@@@@@  @@@@@@@   @@@@@@   @@@@@@@      |      " << '\n';
    SetConsoleTextAttribute (hConsole, 9);std::cout << "|    @@@@@@@  @@@@@@@@  @@@@@@@@  @@@@@@@@  @@@  @@@  @@@@@@@@  @@@@@@@  @@@@@@@@  @@@@@@@@     |       " << '\n';
    SetConsoleTextAttribute (hConsole, 9);std::cout << "|      @@!    @@!  @@@  @@!  @@@  @@!  @@@  @@!  @@@  !@@         @@!    @@!  @@@  @@!  @@@     |       " << '\n';
    SetConsoleTextAttribute (hConsole, 9);std::cout << "|      !@!    !@!  @!@  !@!  @!@  !@!  @!@  !@!  @!@  !@!         !@!    !@!  @!@  !@!  @!@     |      " << '\n';
    SetConsoleTextAttribute (hConsole, 9);std::cout << "|      @!!    @!@!!@!   @!@!@!@!  @!@  !@!  @!@  !@!  !@!         @!!    @!@  !@!  @!@!!@!      |      " << '\n';
    SetConsoleTextAttribute (hConsole, 3);std::cout << "|      !!!    !!@!@!    !!!@!!!!  !@!  !!!  !@!  !!!  !!!         !!!    !@!  !!!  !!@!@!       |   " << '\n';
    SetConsoleTextAttribute (hConsole, 3);std::cout << "|      !!:    !!: :!!   !!:  !!!  !!:  !!!  !!:  !!!  :!!         !!:    !!:  !!!  !!: :!!      |      " << '\n';
    SetConsoleTextAttribute (hConsole, 3);std::cout << "|      :!:    :!:  !:!  :!:  !:!  :!:  !:!  :!:  !:!  :!:         :!:    :!:  !:!  :!:  !:!     |      " << '\n';
    SetConsoleTextAttribute (hConsole, 3);std::cout << "|       ::    ::   :::  ::   :::   :::: ::  ::::: ::   ::: :::     ::    ::::: ::  ::   :::     |      " << '\n';
    SetConsoleTextAttribute (hConsole, 11);std::cout << "|       :      :   : :   :   : :  :: :  :    : :  :    :: :: :     :      : :  :    :   : :     |        " << '\n';
    SetConsoleTextAttribute (hConsole, 11);std::cout << "|                                                                                               |" << '\n';
    SetConsoleTextAttribute (hConsole, 11);std::cout << "|                                                                                               |" << '\n';
    SetConsoleTextAttribute (hConsole, 11); std::cout << "+-----------------------------------------------------------------------------------------------+" << '\n';
    SetConsoleTextAttribute (hConsole, 49);std::cout << "                                    Proyecto #1 Prgramacion                                       " << '\n';
    SetConsoleTextAttribute (hConsole, 11);
    system("pause");
    system("cls");
        int segundos=5;
    for (int i=0; i<=10; i++)//21
        cout << "\n";
    cout << "\t\t\t\t CARGANDO... \n";
    for (int i=0; i<=79; i++)//7|9
        cout << "";
    for (int i=0; i<=79; i++)//79
    {
         cout<<char (219);
        Sleep(segundos*100/80);
      }
    cout<<"\nCompletado!";

}


void menu(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE) ;
    system("cls");



    SetConsoleTextAttribute (hConsole, 11);
    //system("pause");
    system("cls");
    std::cout << "+--------------------------------------------------------+"<< '\n';
    std::cout << "|  para crear ingresa:                              (1)  | " << '\n';
    std::cout << "|  para leer  ingresa:                              (2)  |" << '\n';
    std::cout << "|  para actualizar ingresa:                         (3)  |" << '\n';
    std::cout << "|  para borrar linea ingresa:                       (4)  |  " << '\n';
    std::cout << "|  para traducir ingresa                            (5)  |    " << '\n';
    std::cout << "|  para salir                                       (6)  |    " << '\n';
    std::cout << "+--------------------------------------------------------+"<< '\n';
    std::cout << "ingrese su opcion: ";
    std::cin >> cont;

  switch(cont)
	{
		case 1: crear();		 		break; //javier
 		case 2: leer();					break; //maria //no regresa despues de leer
 		case 3: actualizar();	 		;break; //jonathan
 		case 4: eliminar_linea();	 		break; //carlos
 		case 5: R_in();		break; //james
 		case 6: exit(-1);				break;
		default: MessageBox( 0, "Hello World!", "Greetings", 0 );
	}while(1==1);


}
