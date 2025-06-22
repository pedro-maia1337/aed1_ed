#include <iostream>
#include <limits> // std::numeric_limits
#include <string>

#include "mycat.hpp"

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
    //Adicionar no final
    string str;
    char cad[256];

    cout << "Insira a cadeia de caracteres: ";
    cin.ignore();
    getline( cin, str);

    str.copy(cad, str.length());

    Cat <char> cat;

    cout << "Cadeia Atualizada: ";
    cout << cat.str_push_back(cad, 'c');

    pause ( "Apertar ENTER para continuar" );
}

void method_1502 () {
    //Remove do final 
    string str;
    char cad[256];

    cout << "Insira a cadeia de caracteres: ";
    cin.ignore();
    getline( cin, str);

    str.copy(cad, str.length());

    Cat <char> cat;

    cout << "Cadeia Atualizada: ";
    cout << cat.str_pop_back(cad);

    pause ( "Apertar ENTER para continuar" );
    
}

void method_1503 () {
    //Adiciona no inicio 
    string str;
    char cad[256];

    cout << "Insira a cadeia de caracteres: ";
    cin.ignore();
    getline( cin, str);

    

    str.copy(cad, str.length());

    Cat <char> cat;

    cout << "Cadeia Atualizada: ";
    cout << cat.str_push_front(cad, 'c');

    pause ( "Apertar ENTER para continuar" );
}


void method_1504 () {
    //Remove o inicio
    string str;
    char cad[256];

    cout << "Insira a cadeia de caracteres: ";
    cin.ignore();
    getline( cin, str);

    

    str.copy(cad, str.length());

    Cat <char> cat;

    cout << "Cadeia Atualizada: ";
    cout << cat.str_pop_front(cad);

    

    pause ( "Apertar ENTER para continuar" );

}

void method_1505 () {
    //Adiciona no meio
    string str;
    char cad[256];

    cout << "Insira a cadeia de caracteres: ";
    cin.ignore();
    getline( cin, str);

    str.copy(cad, str.length());

    Cat <char> cat;

    cout << "Cadeia Atualizada: ";

    cout << cat.str_push_mid(cad, 'c');

    pause ( "Apertar ENTER para continuar" );
}

void method_1506 () {
    //Remove do meio
    string str;
    char cad[256];

    cout << "Insira a cadeia de caracteres: ";
    cin.ignore();
    getline( cin, str);

    str.copy(cad, str.length());

    Cat <char> cat;

    cout << "Cadeia Atualizada: ";
    cout << cat.str_pop_mid(cad);
    
    pause ( "Apertar ENTER para continuar" );
}

void method_1507 () {
    //Insire o indice 
    string str;
    char cad[256];

    cout << "Insira a cadeia de caracteres: ";
    cin.ignore();
    getline( cin, str);

    str.copy(cad, str.length());

    Cat <char> cat;

    cout << "Cadeia Atualizada: ";

    cout << cat.str_insert(cad, 'c', 3);
    
    pause ( "Apertar ENTER para continuar" );
}

void method_1508 () {
    //Remove no indice
    string str;
    char cad[256];

    cout << "Insira a cadeia de caracteres: ";
    cin.ignore();
    getline( cin, str);

    str.copy(cad, str.length());

    Cat <char> cat;

    cout << "Cadeia Atualizada: ";

    cout << cat.str_remove(cad, 3);
    
    pause ( "Apertar ENTER para continuar" );
}


void method_1509 () {
    //Procura elemento 
    string str;
    char cad[256];
    char *test;

    cout << "Insira a cadeia de caracteres: ";
    cin.ignore();
    getline( cin, str);

    ;

    str.copy(cad, str.length());

    Cat <char> cat;

    cout << "Cadeia Atualizada: ";

    test = cat.str_chr(cad, 'c');

    if(test != nullptr) {
        cout << "Encontrado" << endl;
    } else {
        cout << "Nao Encontrado" << endl;
    }
    
    pause ( "Apertar ENTER para continuar" );
}


void method_1510 () {
    //Split
    string str;
    char cad[256];

    cout << "Insira a cadeia de caracteres: ";
    cin.ignore();
    getline( cin, str);

    str.copy(cad, str.length());

    Cat <char> cat;

    cout << "Cadeia Atualizada: ";

    cout << cat.str_tok(cad, ',');
    
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