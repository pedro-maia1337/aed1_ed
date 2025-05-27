#include <iostream>
#include <limits> // std::numeric_limits
#include <string>

#include "myarray.hpp"

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


void method_1201 () {
    

    pause ( "Apertar ENTER para continuar" );
}

void method_1202 () {
    

    pause ( "Apertar ENTER para continuar" );
}

void method_1203 () {
    
    pause ( "Apertar ENTER para continuar" );
}


void method_1204 () {

    pause ( "Apertar ENTER para continuar" );

}

void method_1205 () {
    

    pause ( "Apertar ENTER para continuar" );
}

void method_1206 () {
    

    pause ( "Apertar ENTER para continuar" );
}

void method_1207 () {

    pause ( "Apertar ENTER para continuar" );
}

void method_1208 () {
   

    pause ( "Apertar ENTER para continuar" );
}


void method_1209 () {
    

    pause ( "Apertar ENTER para continuar" );
}


void method_1210 () {
    

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
            case 1:     method_1201 ( ); break;
            case 2:     method_1202 ( ); break;
            case 3:     method_1203 ( ); break;
            case 4:     method_1204 ( ); break;
            case 5:     method_1205 ( ); break;
            case 6:     method_1206 ( ); break;
            case 7:     method_1207 ( ); break;
            case 8:     method_1208 ( ); break;
            case 9:     method_1209 ( ); break;
            case 10:    method_1210 ( ); break;
            case 0:     
            cout << "Pressione Enter para Sair" << endl; break;
            default:
            cout << endl << "ERRO: Valor invalido." << endl;
        } // end switch
    } while ( x != 0 );
}