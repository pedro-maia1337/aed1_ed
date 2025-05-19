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


void method_1101 () {
    //Array <int> int_array ( 5, 0 ); gerar array
    //int_array.set ( 0, 1 ); definir dados

    /*
    ler a quantidade de elementos ( N ) a serem gerados;
    gerar essa quantidade ( N ) de valores aleatórios
    dentro do intervalo e armazená-los em arranjo;
    gravá-los, um por linha, em um arquivo ("DADOS.TXT").
    A primeira linha do arquivo deverá informar a quantidade
    de números aleatórios ( N ) que serão gravados em seguida.
    DICA: Usar a função rand( ), mas tentar limitar valores muito grandes.
    Exemplo: valor = arranjo.randomIntGenerate ( inferior, superior );
    */

   int n = 0;
   int inferior = 0;
   int superior = 0;

   int random = 0;

   cout << "Digite a quantidade de numeros aleatorios: " << endl;
   cin >> n;

   cout << "Insira o inicio do intervalo: " << endl;
   cin >> inferior;

   cout << "Insira o final do intervalo: " << endl;
   cin >> superior;

   Array <int> int_array ( n , 0 );

   for(int i = 0; i < n; i++) {
        random = int_array.randomIntGenerate(inferior, superior);
        int_array.set(random, i);
    }

    int_array.print();

    pause ( "Apertar ENTER para continuar" );


}

void method_1102 () {

}

void method_1103 () {

}

void method_1104 () {

}

void method_1105 () {

}

void method_1106 () {

}

void method_1107 () {


}

void method_1108 () {

}


void method_1109 () {

}


void method_1110 () {

}


int main(int argc, char** argv) {
    int x = 0;

    do {
        // identificar
        cout << "1543726_Pedro_Henrique_Cardoso_Maia_ed11\n " << endl;
        // mostrar opcoes
        cout << "Opcoes "                  << endl;
        cout << "0   -  Sair "             << endl;
        cout << "1   -  Procedimento 1101" << endl;
        cout << "2   -  Procedimento 1102" << endl;
        cout << "3   -  Procedimento 1103" << endl;
        cout << "4   -  Procedimento 1104" << endl;
        cout << "5   -  Procedimento 1105" << endl;
        cout << "6   -  Procedimento 1106" << endl;
        cout << "7   -  Procedimento 1107" << endl;
        cout << "8   -  Procedimento 1108" << endl;
        cout << "9   -  Procedimento 1109" << endl;
        cout << "10  -  Procedimento 1110" << endl;

        // ler do teclado
        cout << endl << "Entrar com uma opcao: ";
        cin >> x;

        // escolher acao
        switch ( x ) {
            case 1:     method_1101 ( ); break;
            case 2:     method_1102 ( ); break;
            case 3:     method_1103 ( ); break;
            case 4:     method_1104 ( ); break;
            case 5:     method_1105 ( ); break;
            case 6:     method_1106 ( ); break;
            case 7:     method_1107 ( ); break;
            case 8:     method_1108 ( ); break;
            case 9:     method_1109 ( ); break;
            case 10:    method_1110 ( ); break;
            case 0:     
            cout << "Pressione Enter para Sair" << endl; break;
            default:
            cout << endl << "ERRO: Valor invalido." << endl;
        } // end switch
    } while ( x != 0 );
}