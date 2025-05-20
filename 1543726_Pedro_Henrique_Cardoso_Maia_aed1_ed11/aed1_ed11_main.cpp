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

   cout << "Digite a quantidade de numeros aleatorios: ";
   cin >> n;

   cout << "Insira o inicio do intervalo: ";
   cin >> inferior;

   cout << "Insira o final do intervalo: ";
   cin >> superior;

   Array <int> int_array ( n , 0 );

   for(int i = 0; i < n; i=i+1) {
        random = int_array.randomIntGenerate(inferior, superior);
        int_array.set(i, random);
    }

    int_array.fprint("DADOS.txt");

    int_array.free(); 

    pause ( "Apertar ENTER para continuar" );
}

void method_1102 () {
    /*
    Incluir uma função (1112) para
    procurar o maior valor ímpar em um arranjo.
    Para testar, receber um nome de arquivo como parâmetro e
    aplicar a função sobre o arranjo com os valores lidos;
    DICA: Usar o primeiro valor ímpar, se houver, como referência inicial.
    Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
    maior = arranjo.searchFirstOdd ( );
    */

    int maior = 0;
    Array <int> int_array ( 0 , 0 );
    
    int_array.fread( "DADOS.txt" );

    maior = int_array.searchFirstOdd( );

    cout << "Maior impar: " << maior <<endl;

    int_array.free(); 

    pause ( "Apertar ENTER para continuar" );
}

void method_1103 () {

}

void method_1104 () {
    /*
    somar todos os valores em um arranjo entre duas posições dadas.
    Para testar, receber um nome de arquivo como parâmetro e
    aplicar a função sobre o arranjo com os valores lidos;
    Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
    soma = arranjo.addInterval ( inicio, fim );
    */

    int inferior = 0;
    int superior = 0;

    Array <int> int_array ( 0 , 0 );

    cout << "Insira o inicio do intervalo: ";
    cin >> inferior;

    cout << "Insira o final do intervalo: ";
    cin >> superior;
        
    int_array.fread( "DADOS.txt" );

    cout << "Soma entre o intervalo " << inferior  << " " << superior  << ": " 
         << int_array.addInterval(inferior, superior)   <<endl;


    pause ( "Apertar ENTER para continuar" );

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