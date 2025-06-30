#include <iostream>
#include <limits> // std::numeric_limits
#include <string>
#include "array.hpp"

//Implementando a linguagem c+

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
    ref_int_Array arranjo = new_int_Array(5);

    arranjo = arrayFill(arranjo);

    printIntArray(arranjo);

    array_push_back(arranjo, 6);
    array_push_back(arranjo, 7);
    array_push_back(arranjo, 8);

    cout << "\n";

    printIntArray(arranjo);

    free_int_Array(arranjo);

    pause ( "Apertar ENTER para continuar" );
}

void method_1502 () {
    ref_int_Array arranjo = new_int_Array(5);

    arranjo = arrayFill(arranjo);

    printIntArray(arranjo);

    array_pop_back(arranjo);

    cout << "\n";
    printIntArray(arranjo);
    
    free_int_Array(arranjo);

    pause ( "Apertar ENTER para continuar" ); 
}

void method_1503 () {
    ref_int_Array arranjo = new_int_Array(5);

    arranjo = arrayFill(arranjo);

    printIntArray(arranjo);

    array_push_front(arranjo, 30);
    array_push_front(arranjo, 40);
    array_push_front(arranjo, 50);

    cout << "\n";
    printIntArray(arranjo);

    free_int_Array(arranjo);

    pause ( "Apertar ENTER para continuar" );
}


void method_1504 () { 
    ref_int_Array arranjo = new_int_Array(5);

    arranjo = arrayFill(arranjo);

    printIntArray(arranjo);

    array_pop_front(arranjo);
    array_pop_front(arranjo);
    array_pop_front(arranjo);

    cout << "\n";
    printIntArray(arranjo);
    
    free_int_Array(arranjo);

    pause ( "Apertar ENTER para continuar" );
}

void method_1505 () {
    ref_int_Array arranjo = new_int_Array(5);

    arranjo = arrayFill(arranjo);

    printIntArray(arranjo);

    array_push_mid(arranjo, 30);
    array_push_mid(arranjo, 40);
    array_push_mid(arranjo, 50);

    cout << "\n";
    printIntArray(arranjo);

    free_int_Array(arranjo);

    pause ( "Apertar ENTER para continuar" );
}

void method_1506 () {
    ref_int_Array arranjo = new_int_Array(5);

    arranjo = arrayFill(arranjo);

    printIntArray(arranjo);

    array_pop_mid(arranjo);

    cout << "\n";
    printIntArray(arranjo);
    
    free_int_Array(arranjo);
    
    pause ( "Apertar ENTER para continuar" );
}

void method_1507 () {
    ref_int_Array arranjo1 = new_int_Array(5);
    ref_int_Array arranjo2 = new_int_Array(5);
    int result = 0;

    arranjo1 = arrayFill(arranjo1);
    arranjo2 = arrayFill(arranjo2);

    array_push_back(arranjo2, 10);

    printIntArray(arranjo1);
    cout << "\n";
    printIntArray(arranjo2);
    cout << "\n";

    result = intArray_cmp(arranjo1, arranjo2);

    if(result == 0) cout << "Arranjos iguais";
    if(result < 0)  cout << "Primeiro arranjo menor que o segundo";
    if(result > 0 ) cout << "Primeiro arranjo maior que o segundo";

    free_int_Array(arranjo1);
    free_int_Array(arranjo2);

    pause ( "Apertar ENTER para continuar" );
}

void method_1508 () {
    ref_int_Array arranjo1 = new_int_Array(5);
    ref_int_Array arranjo2 = new_int_Array(5);

    arranjo1 = arrayFill(arranjo1);
    arranjo2 = arrayFill(arranjo2);

    ref_int_Array arranjo3 = intArray_cat(arranjo1, arranjo2);

    printIntArray(arranjo1);
    cout << "\n";
    printIntArray(arranjo2);
    cout << "\n";
    printIntArray(arranjo3);
    cout << "\n";

    free_int_Array(arranjo1);
    free_int_Array(arranjo2);
    free_int_Array(arranjo3);
    
    pause ( "Apertar ENTER para continuar" );
}


void method_1509 () {
    ref_int_Array arranjo = new_int_Array(5);

    arranjo = arrayFill(arranjo);
    
    ref_int_Array inst = intArray_seek(arranjo, 2);

    printIntArray(arranjo);
    cout << "\n";

    if(inst != nullptr) {
        cout << "Valor encontrado no arranjo";
    } else {
        cout << "Valor NAO encontrado no arranjo";
    }

    free_int_Array(arranjo);
    
    pause ( "Apertar ENTER para continuar" );
}


void method_1510 () {
    ref_int_Array arranjo = new_int_Array(5);

    arranjo = arrayFill(arranjo);
    
    ref_int_Array s = intArray_sub(arranjo, 1, 2);

    printIntArray(arranjo);
    cout << "\n";
    printIntArray(s);
    cout << "\n";

    free_int_Array(arranjo);
    
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