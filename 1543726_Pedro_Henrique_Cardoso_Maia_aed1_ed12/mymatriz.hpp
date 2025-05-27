#ifndef _MYMATRIZ_HPP_
#define _MYMATRIZ_HPP_

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

template <typename T>

class Matrix
{
    private: 
        T optional;
        int rows ;
        int columns;
        T** data ;

    public: 
        Matrix ( ) {
            this->rows = 0;
            this->columns = 0;
            data = nullptr;
        } 

        Matrix ( int rows, int columns, T initial ) {
            // definir dado local
            bool OK = true;
            // definir valores iniciais
            this->optional = initial ;
            this->rows = rows ;
            this->columns = columns;
            // reservar area
            data = new T* [ rows ];
            if ( data != nullptr ) {
                for ( int x = 0; x < rows; x=x+1 ) {
                    data [x] = new T [ columns ];
                    OK = OK && ( data [x] != nullptr );
                } 
                if ( ! OK ) {
                    data = nullptr;
                }
            } 
        } 

        ~Matrix ( ) {
            if ( data != nullptr ) {
                for ( int x = 0; x < rows; x=x+1 ) {
                    delete ( data [ x ] );
                } 
                delete ( data );
                data = nullptr;
            } 
        } 

        void set ( int row, int column, T value ) {
            if ( row < 0 || row >= rows || column < 0 || column >= columns ) {
                cout << "\nERROR: Invalid position.\n";
            }
            else {
                data [ row ][ column ] = value;
            } 
        } 

        T get ( int row, int column ) {
            T value = optional;
            if ( row < 0 || row >= rows || column < 0 || column >= columns ) {
                cout << "\nERROR: Invalid position.\n";
            } else {
                value = data [ row ][ column ];
            } 
            return ( value );
        } 

        void print ( ) {
            cout << endl;
            for ( int x = 0; x < rows; x=x+1 ) {
                for ( int y = 0; y < columns; y=y+1 ) {
                cout << data[ x ][ y ] << "\t";
                } // end for
                cout << endl;
            }   
            cout << endl;
        } 
};

#endif