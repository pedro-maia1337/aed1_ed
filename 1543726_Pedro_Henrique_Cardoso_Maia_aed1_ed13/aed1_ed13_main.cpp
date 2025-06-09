#include <iostream>
#include <limits> // std::numeric_limits
using std::cin ; // para entrad
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ofstream; // para gravar arquivo
using std::ifstream ; // para ler arquivo

#include "myarray.hpp"
#include "mymatriz.hpp"
#include "contato.hpp"
#include "Erro.hpp"

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

/*bool hasErro ( ) {
    return ( getErro( ) != 0 );
} // end hasErro ( ) */


void method_1301 () { //Fazer por ref 
    Contato Contato1;

    Contato1.readName();

    cout << Contato1.getNome();

    pause ( "Apertar ENTER para continuar" );
}

void method_1302 () { // padronizar o idioma dessa bomba
    Contato Contato1;

    Contato1.readPhone();

    cout << Contato1.getFone();
    
    pause ( "Apertar ENTER para continuar" );
}

void method_1303 () {
    Contato Contato1;

    Contato1.readPhone();

    cout << Contato1.getFone();

    if(Contato1.isValidPhone()) {
        cout << " Telefone Valido" << endl;
    } else {
        cout << " Telefone Invalido" << endl;
    }

    pause ( "Apertar ENTER para continuar" );
}


void method_1304 () {
    pause ( "Apertar ENTER para continuar" );
}

void method_1305 () {
    pause ( "Apertar ENTER para continuar" );
}

void method_1306 () {
    pause ( "Apertar ENTER para continuar" );
}

void method_1307 () {
    pause ( "Apertar ENTER para continuar" );
}

void method_1308 () {
    pause ( "Apertar ENTER para continuar" );
}


void method_1309 () {
    pause ( "Apertar ENTER para continuar" );
}


void method_1310 () {
    pause ( "Apertar ENTER para continuar" );
}


int main(int argc, char** argv) {
    int x = 0;

    do {
        // identificar
        cout << "1543726_Pedro_Henrique_Cardoso_Maia_ed13\n " << endl;
        // mostrar opcoes
        cout << "Opcoes "                  << endl;
        cout << "0   -  Sair "             << endl;
        cout << "1   -  Procedimento 1301" << endl;
        cout << "2   -  Procedimento 1302" << endl;
        cout << "3   -  Procedimento 1303" << endl;
        cout << "4   -  Procedimento 1304" << endl;
        cout << "5   -  Procedimento 1305" << endl;
        cout << "6   -  Procedimento 1306" << endl;
        cout << "7   -  Procedimento 1307" << endl;
        cout << "8   -  Procedimento 1308" << endl;
        cout << "9   -  Procedimento 1309" << endl;
        cout << "10  -  Procedimento 1310" << endl;

        // ler do teclado
        cout << endl << "Entrar com uma opcao: ";
        cin >> x;

        // escolher acao
        switch ( x ) {
            case 1:     method_1301 ( ); break;
            case 2:     method_1302 ( ); break;
            case 3:     method_1303 ( ); break;
            case 4:     method_1304 ( ); break;
            case 5:     method_1305 ( ); break;
            case 6:     method_1306 ( ); break;
            case 7:     method_1307 ( ); break;
            case 8:     method_1308 ( ); break;
            case 9:     method_1309 ( ); break;
            case 10:    method_1310 ( ); break;
            case 0:     
            cout << "Pressione Enter para Sair" << endl; break;
            default:
            cout << endl << "ERRO: Valor invalido." << endl;
        } // end switch
    } while ( x != 0 );
}