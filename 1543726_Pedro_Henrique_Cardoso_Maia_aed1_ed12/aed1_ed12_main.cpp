#include <iostream>
#include <limits> // std::numeric_limits
#include <string>

#include "myarray.hpp"
#include "mymatriz.hpp"

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

    /*
    ler a quantidade de elementos ( MxN ) a serem gerados; 
    gerar essa quantidade ( MxN ) de valores aleatórios  
    dentro do intervalo e armazená-los em matriz; 
    gravá-los, um por linha, em um arquivo ("DADOS.TXT"). 
    A primeira linha do arquivo deverá informar a quantidade  
    de números aleatórios ( N ) que serão gravados em seguida. 
    DICA: Usar a função rand( ), mas tentar limitar valores ao intervalo [1:100]. 
    
    Exemplo: matrix.randomIntGenerate ( inferior, superior );
    */

    int m = 0;
    int n = 0;
    int inferior = 0;
    int superior = 0;

    cout << "Digite o numero de linhas: "; 
    cin >> m;

    cout << "Digite o numero de colunas: ";
    cin >> n;

    cout << "Digite o inicio do intervalo: "; //limitar 1 
    cin >> inferior;

    cout << "Digite o final do intervalo: ";  //limitar 100
    cin >> superior;

    Matriz <int> int_matriz (m, n, 0);

    int_matriz.randomMatrizIntGenerate(inferior, superior);
    int_matriz.fprint("DADOS.txt");
    int_matriz.print();

    pause ( "Apertar ENTER para continuar" );
}

void method_1202 () {
    /*
    escalar uma matriz, multiplicando todos os seus valores por uma constante. 
    Para testar, receber um nome de arquivo como parâmetro e  
    aplicar a função sobre a matriz com os valores lidos. 
    DICA: Usar o modelo de matriz proposto nos exemplos. 
 
    Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" ); 
    matrix2 = matrix1.scalar ( 3 );   // multiplicar cada valor pelo argumento
    */

    Matriz <int> int_matriz (0, 0, 0);
    int_matriz.fread("DADOS.txt");
    int_matriz.scalar( 3 );
    int_matriz.print();
    
    pause ( "Apertar ENTER para continuar" );
}

void method_1203 () {
    /*
        testar se uma matriz é a identidade. 
        Para testar, receber um nome de arquivo como parâmetro e  
        aplicar a função sobre a matriz com os valores lidos. 
        DICA: Usar o modelo de matriz proposto nos exemplos. 
        
        Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" ); 
        teste     = matrix1.identidade ( );
    */

    Matriz <int> int_matriz (0, 0, 0);
    int_matriz.fread("DADOS2.txt");
    bool teste = false;

    teste = int_matriz.identidade();
    
    if(teste){
        cout << "Matriz identidade." << endl;
    } else {
        cout << "Nao e uma matriz identidade. " << endl; 
    }
      
    pause ( "Apertar ENTER para continuar" );
}


void method_1204 () {

    /*
        testar a igualdade de duas matrizes. 
        Para testar, receber um nome de arquivo como parâmetro e  
        aplicar a função sobre o arranjo com os valores lidos. 
        DICA: Usar o modelo de matrz proposto nos exemplos. 
        
        Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" ); 
        matrix2 = readMatrixFromFile ( "DADOS2.TXT" ); 
        teste     = (matrix1 == matrix2);
    */

    //validar primeiro linhas e colunas 

    Matriz <int> int_matriz1 (0, 0, 0);
    Matriz <int> int_matriz2 (0, 0, 0);

    int_matriz1.fread("DADOS.txt");
    int_matriz2.fread("DADOS1.txt");
    int_matriz1.print();
    int_matriz2.print();

    if(int_matriz1==int_matriz2) {
        cout << "Iguais";
    } else {
        cout << "Diferentes";
    }

    pause ( "Apertar ENTER para continuar" );

}

void method_1205 () {
    /*
        somar duas matrizes e mostrar o resultado. 
        Para testar, receber um nome de arquivo como parâmetro e  
        aplicar a função sobre o arranjo com os valores lidos. 
        DICA: Usar o modelo de matrz proposto nos exemplos. 
        
        Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" ); 
        matrix2 = readMatrixFromFile ( "DADOS2.TXT" ); 
        soma    = matrix1.add             (  matrix2 );
    */

    Matriz <int> int_matriz1 (0, 0, 0);
    Matriz <int> int_matriz2 (0, 0, 0);

    int_matriz1.fread("DADOS.txt");
    int_matriz2.fread("DADOS1.txt");
    int_matriz1.print();
    int_matriz2.print();

    cout << "Soma: " << (int_matriz1+int_matriz2) << endl;
    
    pause ( "Apertar ENTER para continuar" );
}

void method_1206 () {
    /*
        operar duas linhas da matriz, guardando no lugar da primeira, 
        as somas de cada elemento da primeira linha com o respectivo da segunda linha 
        multiplicado por uma constante. 
        DICA: Usar o modelo de matrz proposto nos exemplos. 
        
        Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" ); 
        matrix1.addRows ( 0, 1, (-1) );
    */

    Matriz <int> int_matriz (0, 0, 0);

    int_matriz.fread("DADOS3.txt");
    int_matriz.addRows(2);
    int_matriz.print();
    

    pause ( "Apertar ENTER para continuar" );
}

void method_1207 () {
    /*
        operar duas linhas da matriz, guardando no lugar da primeira, 
        as diferenças de cada elemento da primeira linha com o respectivo da segunda linha 
        multiplicado por uma constante. 
        DICA: Usar o modelo de matrz proposto nos exemplos. 
        
        Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" ); 
        matrix1.subtractRows ( 0, 1, (2) );
    */

    Matriz <int> int_matriz (0, 0, 0);

    int_matriz.fread("DADOS3.txt");
    int_matriz.subtractRows(3);
    int_matriz.print();

    pause ( "Apertar ENTER para continuar" );
}

void method_1208 () {
    /*
        dizer em qual linha da matriz se encontra certo valor, se houver. 
        Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" ); 
        teste = matrix1.searchRows ( procurado );
    */

    Matriz <int> int_matriz (0, 0, 0);
    int x = 0;
    int row = 0;

    int_matriz.fread("DADOS.txt");

    cout << "Digite o numero que deseja procurar: ";
    cin >> x;

    int_matriz.print();

    row = int_matriz.searchRows(x);

    if(row == 0) {
        cout << "Valor: " << x << " nao encontrado. " << endl;
    } else {
        cout << "Valor: " << x << " encontrado na linha: " << row + 1 << endl;
    }

    pause ( "Apertar ENTER para continuar" );
}


void method_1209 () {
    /*
        dizer em qual coluna da matriz se encontra certo valor, se houver. 
        Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" ); 
        teste     = matrix1.searchColumns ( procurado );
    */

    Matriz <int> int_matriz (0, 0, 0);
    int x = 0;
    int column = 0;

    int_matriz.fread("DADOS.txt");

    cout << "Digite o numero que deseja procurar: ";
    cin >> x;

    int_matriz.print();

    column = int_matriz.searchColumns(x);

    if(column == 0) {
        cout << "Valor: " << x << " nao encontrado. " << endl;
    } else {
        cout << "Valor: " << x << " encontrado na coluna: " << column + 1 << endl;
    }
    

    pause ( "Apertar ENTER para continuar" );
}


void method_1210 () {
    /*
        transpor os dados em uma matriz. 
        Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" ); 
        matrix1.transpose ( );
    */
    
    Matriz <int> int_matriz (0, 0, 0);

    int_matriz.fread("DADOS.txt");

    int_matriz.print();

    int_matriz.transpose();

    int_matriz.print();

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