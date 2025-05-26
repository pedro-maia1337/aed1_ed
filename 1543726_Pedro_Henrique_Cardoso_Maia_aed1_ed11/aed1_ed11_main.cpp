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
    cout << "Numeros Gerados: " << endl;
    int_array.print();
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
    Array <int> int_array ( 1 , 0 );

    int_array.fread("DADOS.txt");
    maior = int_array.searchFirstOdd( );

    if(maior == 0) {
        cout << "O arranjo nao possui numeros impares." << endl;
    } else {
        cout << "Maior impar: " << maior <<endl;
    }

    int_array.free(); 

    pause ( "Apertar ENTER para continuar" );
}

void method_1103 () {
    /*
    procurar o maior valor ímpar múltiplo de 3 em um arranjo. 
    Para testar, receber um nome de arquivo como parâmetro e  
    aplicar a função sobre o arranjo com os valores lidos; 
    DICA: Usar o primeiro valor ímpar múltiplo de 3, se houver, como referência inicial. 
    
    Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" ); 
    menor  = arranjo.searchFirstOddx3 ( );
    */

    int maior = 0;

    Array <int> int_array ( 1 , 0 );
    
    int_array.fread( "DADOS.txt" );

    maior = int_array.searchFirstOddx3( );

    if(maior == 0) {
        cout << "O arranjo nao possui numeros impares e multiplos de tres" << endl;
    } else {
        cout << "Maior impar multiplo de 3: " << maior <<endl;
    }

    int_array.free(); 

    pause ( "Apertar ENTER para continuar" );
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
    int soma = 0;

    Array <int> int_array ( 0 , 0 );

    cout << "Insira o inicio do intervalo: ";
    cin >> inferior;

    cout << "Insira o final do intervalo: ";
    cin >> superior;
        
    int_array.fread( "DADOS.txt" );

    soma = int_array.addInterval(inferior, superior);

    if(soma == 0) {
        cout << "O arranjo nao possui valores nesse intervalo" << endl;
    } else {
        cout << "Soma entre o intervalo " << inferior  << " e " << superior  << ": " 
         << soma  <<endl;
    }

    pause ( "Apertar ENTER para continuar" );

}

void method_1105 () {
    /*
    achar a média dos valores em um arranjo entre duas posições dadas.
    Para testar, receber um nome de arquivo como parâmetro e
    aplicar a função sobre o arranjo com os valores lidos;
    Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
    media = arranjo.averageInterval ( inicio, fim );
    */

    int inferior = 0;
    int superior = 0;
    double media = 0.0;

    Array <int> int_array ( 0 , 0 );

    cout << "Insira o inicio do intervalo: ";
    cin >> inferior;

    cout << "Insira o final do intervalo: ";
    cin >> superior;
        
    int_array.fread( "DADOS.txt" );

    media = int_array.averageInterval(inferior, superior) ;

    if(media - 1 == 0.0) {
        cout << "O arranjo nao possui valores nesse intervalo" << endl;
    } else {
        cout << "Media entre o intervalo " << inferior  << " e " << superior  << ": " 
         <<  media <<endl;
    }

    pause ( "Apertar ENTER para continuar" );
}

void method_1106 () {
    /*
    verificar se todos os valores são positivos e maiores que 100 em um arranjo.
    Para testar, ler o arquivo ("DADOS.TXT")
    armazenar os dados em um arranjo.
    Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
    teste = arranjo.negatives ( );
    */

    Array <int> int_array1 ( 1, 0 );
    bool teste = false;
    int_array1.fread ( "DADOS.txt" );

    teste = int_array1.negatives();

    if(teste){
        cout << "Todos os valores sao positivos e maiores que 100.";
    } else {
        cout << "O arranjo possui valores diferentes de positivos e maiores que 100";
    }

    int_array1.free ( );


    pause ( "Apertar ENTER para continuar" );
}

void method_1107 () {
    /*
    dizer se está ordenado, ou não, em ordem decrescente. 
    DICA: Testar se não está desordenado, ou seja,  
    se existe algum valor que seja maior que o seguinte. 
    Não usar break ! 
 
    Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" ); 
    teste    = arranjo.isDecrescent ( );
    */

    Array <int> int_array1 ( 1, 0 );
    bool teste = false;
    int_array1.fread ( "DADOS.txt" );

    teste = int_array1.isDecrescent( );

    if(teste){
        cout << "O arranjo esta ordenado.";
    } else {
        cout << "O arranjo nao esta ordenado.";
    }

    int_array1.free ( );


    pause ( "Apertar ENTER para continuar" );
}

void method_1108 () {
    /*
    dizer se determinado valor está presente em arranjo,  
    entre duas posições indicadas. 
    Para testar, ler o arquivo ("DADOS.TXT"), 
    e armazenar os dados em arranjo; 
    ler do teclado um valor inteiro para ser procurado; 
    determinar se o valor procurado existe no arranjo. 
 
    Exemplo: arranjo = readArrayFromFile     ( "DADOS.TXT" ); 
    existe  = arranjo.searchInterval ( procurado, inicio, fim );
    */
    int inferior = 0;
    int superior = 0;
    int procurado = 0;
    bool existe = false;

    Array <int> int_array ( 1 , 0 );

    cout << "Insira o numero que deseja procurar: ";
    cin >> procurado;

    cout << "Insira o inicio do intervalo: ";
    cin >> inferior;

    cout << "Insira o final do intervalo: ";
    cin >> superior;

    int_array.fread("DADOS.txt");

    existe = int_array.searchInterval(procurado, inferior, superior);

    if(existe){
        cout << "O valor: " << procurado << " foi ENCONTRADO no arranjo." << endl;
    } else {
        cout << "O valor: " << procurado << " NAO foi encontrado no arranjo." << endl;
    }

    pause ( "Apertar ENTER para continuar" );
}


void method_1109 () {
    /*
    escalar dados em arranjo, entre duas posições dadas,  
    multiplicando cada valor por uma constante. 
    Para testar, ler o arquivo ("DADOS.TXT"), 
    e armazenar os dados em arranjo; 
    ler do teclado um valor inteiro para indicar a constante. 
 
    Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" ); 
    novo    = arranjo.scalar( constante, inicio, fim );
    */

    int constante = 0;
    int inferior = 0;
    int superior = 0;

    Array <int> int_array(1, 0);

    int_array.fread("DADOS.txt");

    cout << "Insira a constante que deseja multiplicar: ";
    cin >> constante;

    cout << "Insira o inicio do intervalo: ";
    cin >> inferior;

    cout << "Insira o final do intervalo: ";
    cin >> superior;

    int_array.print();

    int_array.scalar(constante, inferior, superior);

    int_array.print();

    pause ( "Apertar ENTER para continuar" );
}


void method_1110 () {
    /*
    incluir um método (1120) para  
    colocar valores em arranjo em ordem decrescente, 
    mediante trocas de posições, até ficar totalmente ordenado.  
    Para testar, ler o arquivo ("DADOS.TXT"), 
    e armazenar os dados em arranjo. 
 
    Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" ); 
    arranjo.sortDown ( );
    */

    Array <int> int_array (1, 0);

    int_array.fread("DADOS.txt");

    int_array.print();

    int_array.sortDown();

    int_array.print();

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