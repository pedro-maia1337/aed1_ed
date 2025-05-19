#ifndef _MYARRAY_HPP_
#define _MYARRAY_HPP_

#include <iostream>

using std::cin ; // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ofstream; // para gravar arquivo
using std::ifstream ; // para ler arquivo
#include <ctime>
#include <random>

template < typename T >

class Array {
    private: 
        T optional;
        int length;
        T *data;

    public:
        Array ( int n, T initial ) {
            optional = initial;
            length = 0;
            data = nullptr;

            if ( n > 0 ) {
                length = n;
                data = new T [ length ];
            }
        } 

        void free ( ) {
            if ( data != nullptr ) {
                delete ( data );
                data = nullptr;
            } 
        } 

        void set ( int position, T value ) {
            if ( 0 <= position && position < length ) {
                data [ position ] = value;
            } 
        } 

        T get ( int position ) {
            T value = optional;
            if ( 0 <= position && position < length ) {
                value = data [ position ];
            }
            return ( value );
        } 

        void print ( ) {
            cout << endl;
            for ( int x = 0; x < length; x=x+1 ) {
                cout << setw( 3 ) << x << " : "
                << setw( 9 ) << data[ x ]
                << endl;
            } 
            cout << endl;
        } 

        int randomIntGenerate ( int inferior, int superior ) {
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_real_distribution<> distrib(0.0, 1.0);
            int random = distrib(gen);
            cout << random << " ";
            return random;
        }
};

#endif