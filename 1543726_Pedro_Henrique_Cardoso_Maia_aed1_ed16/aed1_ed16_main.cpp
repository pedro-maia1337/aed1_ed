#include <iostream>
#include <limits> // std::numeric_limits
#include <string>
#include "array.h"

#define MAX_SIZE 256

using namespace std;

void pause ( std::string text )
{
    std::string dummy;
    std::cin.clear ( );
    std::cout << std::endl << text;
    std::cin.ignore( );
    std::getline(std::cin, dummy);
    std::cout << std::endl << std::endl;
} // end pause ( )


void method_1501 () {

    //Adaptar de acordo com cada enunciado, modificando o array.h (por ref ou não)
    

    pause ( "Apertar ENTER para continuar" );
}

void method_1502 () {
    

    pause ( "Apertar ENTER para continuar" );
    
}

void method_1503 () {
    

    pause ( "Apertar ENTER para continuar" );
}


void method_1504 () { 

    pause ( "Apertar ENTER para continuar" );

}

void method_1505 () {
    

    pause ( "Apertar ENTER para continuar" );
}

void method_1506 () {
    
    
    pause ( "Apertar ENTER para continuar" );
}

void method_1507 () {
    
    pause ( "Apertar ENTER para continuar" );
}

void method_1508 () {
    
    
    pause ( "Apertar ENTER para continuar" );
}


void method_1509 () {
    
    
    pause ( "Apertar ENTER para continuar" );
}


void method_1510 () {
    
    
    pause ( "Apertar ENTER para continuar" );
}


int main(int argc, char** argv) {
    int x = 0;

    do {
        // identificar
        cout << "1543726_Pedro_Henrique_Cardoso_Maia_ed11\n " << endl;
        // mostrar opcoes
        cout << "Opcoes "                  << endl;
        cout << "0   -  Sair "             << endl;
        cout << "1   -  Procedimento 1201" << endl;
        cout << "2   -  Procedimento 1202" << endl;
        cout << "3   -  Procedimento 1203" << endl;
        cout << "4   -  Procedimento 1204" << endl;
        cout << "5   -  Procedimento 1205" << endl;
        cout << "6   -  Procedimento 1206" << endl;
        cout << "7   -  Procedimento 1207" << endl;
        cout << "8   -  Procedimento 1208" << endl;
        cout << "9   -  Procedimento 1209" << endl;
        cout << "10  -  Procedimento 1210" << endl;

        // ler do teclado
        cout << endl << "Entrar com uma opcao: ";
        cin >> x;

        // escolher acao
        switch ( x ) {
            case 1:     method_1501 ( ); break;
            case 2:     method_1502 ( ); break;
            case 3:     method_1503 ( ); break;
            case 4:     method_1504 ( ); break;
            case 5:     method_1505 ( ); break;
            case 6:     method_1506 ( ); break;
            case 7:     method_1507 ( ); break;
            case 8:     method_1508 ( ); break;
            case 9:     method_1509 ( ); break;
            case 10:    method_1510 ( ); break;
            case 0:     
            cout << "Pressione Enter para Sair" << endl; break;
            default:
            cout << endl << "ERRO: Valor invalido." << endl;
        } // end switch
    } while ( x != 0 );
}