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
#include <ctime>
#include <random>

template <typename T>

class Matriz
{
    private: 
        T optional;
        int rows ;
        int columns;
        T** data ;

    public: 
        Matriz ( ) {
            this->rows = 0;
            this->columns = 0;
            data = nullptr;
        } 

        Matriz ( int rows, int columns, T initial ) {
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

        ~Matriz ( ) {
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

        void fprint ( string fileName ) { 
            ofstream afile; 
 
            afile.open ( fileName ); 
            afile << rows    << endl; 
            afile << columns << endl; 
            for ( int x = 0; x < rows; x=x+1 ) { 
                for ( int y = 0; y < columns; y=y+1 ) { 
                    afile << data[ x ][ y] << endl; 
                } 
            } 
            afile.close ( ); 
        } 

        void fread ( string fileName ) { 
            ifstream afile; 
            int m = 0; 
            int n  = 0; 
 
            afile.open ( fileName ); 
            afile >> m; 
            afile >> n; 
            if ( m <= 0 || n <= 0 ) { 
                cout << "\nERROR: Invalid dimensions for matrix.\n" << endl; 
            } else { 
                rows       = m; 
                columns = n; 
                data         = new T* [ rows ]; 
                for ( int x = 0; x < rows; x=x+1 ) { 
                    data [x] = new T  [ columns ]; 
                } 
                for ( int x = 0; x < rows; x=x+1 ) { 
                    for ( int y = 0; y < columns; y=y+1 ) { 
                        afile >> data[ x ][ y ]; 
                    } 
                } 
            } 
            afile.close ( ); 
        } 

        void randomMatrizIntGenerate (int inferior, int superior ) { //substituir por um SET
            std::uniform_int_distribution<> distrib(inferior, superior);
            for ( int x = 0; x < rows; x=x+1 ) { 
                for ( int y = 0; y < columns; y=y+1 ) { 
                    data[ x ][ y] = distrib(gen);
                } 
            } 
        }

        void scalar(int n) {
            for ( int x = 0; x < rows; x=x+1 ) { 
                for ( int y = 0; y < columns; y=y+1 ) { 
                    data[ x ][ y] = data[ x ][ y] * n;
                } 
            } 
        }

        bool identidade ( ) {
            if(rows != columns) {
                return false;
            }

            for(int i = 0; i < rows; i++){
                for(int k = 0; k < columns; k++){
                    if(i == k) {
                        if(data[i][k] != 1) return false; 
                    }
                    if(i != k) {
                        if(data[i][k] != 0) return false; 
                    }
                }
            }

            return true;
        }

        bool operator== ( const Matriz <T> &other ) { 
            if(rows != other.rows || columns != other.columns) {
                return false;
            }

            for(int i = 0; i < rows; i=i+1) {
                for(int k = 0; k < columns; k=k+1) {
                    if(data[i][k] != other.data[i][k]) return false; 
                }
            }
            return true;
        }

        T operator+ ( const Matriz <T> &other ) { 
            T soma = optional;
            T ac = optional;

            for(int i = 0; i < rows; i=i+1) {
                for(int k = 0; k < columns; k=k+1) {
                    soma = data[i][k] + other.data[i][k];
                    ac = ac + soma;
                }
            }

            return ac;
        }

        void addRows(int k) {
            T sum = optional;
            for(int i = 0; i < rows; i=i+1) {
                sum = data [0][i] + (k * data [1][i]);
                data [0][i] = sum;
            }
        }


        void subtractRows(int k) {
            T sum = optional;
            for(int i = 0; i < rows; i=i+1) {
                sum = data [0][i] - (k * data [1][i]);
                data [0][i] = sum;
            }
        }

        int searchRows(int x) {
            int foundRow = 0;
            for(int i = 0; i < rows; i=i+1) {
                for(int k = 0; k < columns; k=k+1) {
                    if(data[i][k] == x) foundRow = i;
                }
            }

            return foundRow;
        }

        int searchColumns(int x) {
            int foundColumns = 0;
            for(int i = 0; i < rows; i=i+1) {
                for(int k = 0; k < columns; k=k+1) {
                    if(data[i][k] == x) foundColumns = k;
                }
            }

            return foundColumns;
        }

        void transpose() {
            Matriz <int> temp (rows, columns, 0);

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    temp.data[j][i] = data[i][j];
                }
            }

            int aux = rows;
            rows = columns;
            columns = aux;

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    data[i][j] = temp.data[i][j];
                }
            }
            
        }
};

#endif