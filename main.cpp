/*este es el menu donde se ejecutara todo el codigo
por el momento solo lleva esto ya que no se ah terminado todas las funciones
*/


#include <iostream>
#include <string.h>
#include <fstream>
#include <windows.h>
using namespace std;





int cont = 0;

void menu();/*
void crear(); // javier
void leer();	//maria
void actualizar(); //jonathan
void delete_line(); //carlos
void readforiginal();//james
void diccionario();//james
void lecturaCodigo();//james

*/



main(){
  menu();




}
void menu(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE) ;
    system("cls");

    SetConsoleTextAttribute (hConsole, 1);std::cout << "@@@@@@@  @@@@@@@    @@@@@@   @@@@@@@   @@@  @@@   @@@@@@@  @@@@@@@   @@@@@@   @@@@@@@  " << '\n';
    SetConsoleTextAttribute (hConsole, 1);std::cout << "@@@@@@@  @@@@@@@@  @@@@@@@@  @@@@@@@@  @@@  @@@  @@@@@@@@  @@@@@@@  @@@@@@@@  @@@@@@@@  " << '\n';
    SetConsoleTextAttribute (hConsole, 1);std::cout << "  @@!    @@!  @@@  @@!  @@@  @@!  @@@  @@!  @@@  !@@         @@!    @@!  @@@  @@!  @@@  " << '\n';
    SetConsoleTextAttribute (hConsole, 9);std::cout << "  !@!    !@!  @!@  !@!  @!@  !@!  @!@  !@!  @!@  !@!         !@!    !@!  @!@  !@!  @!@ " << '\n';
    SetConsoleTextAttribute (hConsole, 9);std::cout << "  @!!    @!@!!@!   @!@!@!@!  @!@  !@!  @!@  !@!  !@!         @!!    @!@  !@!  @!@!!@!  " << '\n';
    SetConsoleTextAttribute (hConsole, 9);std::cout << "  !!!    !!@!@!    !!!@!!!!  !@!  !!!  !@!  !!!  !!!         !!!    !@!  !!!  !!@!@!" << '\n';
    SetConsoleTextAttribute (hConsole, 3);std::cout << "  !!:    !!: :!!   !!:  !!!  !!:  !!!  !!:  !!!  :!!         !!:    !!:  !!!  !!: :!!  " << '\n';
    SetConsoleTextAttribute (hConsole, 3);std::cout << "  :!:    :!:  !:!  :!:  !:!  :!:  !:!  :!:  !:!  :!:         :!:    :!:  !:!  :!:  !:! " << '\n';
    SetConsoleTextAttribute (hConsole, 3);std::cout << "   ::    ::   :::  ::   :::   :::: ::  ::::: ::   ::: :::     ::    ::::: ::  ::   ::: " << '\n';
    SetConsoleTextAttribute (hConsole, 9
    );std::cout << "   :      :   : :   :   : :  :: :  :    : :  :    :: :: :     :      : :  :    :   : :  " << '\n';
    SetConsoleTextAttribute (hConsole, 9);

/*
  switch(cont)
	{
		case 1: crear();		 		;break; //javier
 		case 2: leer();					;break; //maria
 		case 3: actualizar();	 		;break; //jonathan
 		case 4: delete_line();	 		;break; //carlos
 		case 5: lecturaCodigo();		;break; //james
 		case 6: exit(-1);				;break;
		default: MessageBox( 0, "Hello World!", "Greetings", 0 );;
	}*/




}
