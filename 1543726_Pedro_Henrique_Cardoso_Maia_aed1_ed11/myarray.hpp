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

std::mt19937 gen(std::random_device{}()); // Inicializa apenas uma vez

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
            std::uniform_int_distribution<> distrib(inferior, superior);
            return distrib(gen);
        }

        void fprint ( string fileName ) {
            ofstream afile; // output file
            afile.open ( fileName );
            afile << length << endl;
            for ( int x = 0; x < length; x=x+1 ) {
                afile << data[ x ] << endl;
            } // end for
            afile.close ( );
        } // end fprint ( )

        void fread ( string fileName ) {
            ifstream afile; // input file
            int n = 0;
            afile.open ( fileName );
            afile >> n;
            if ( n <= 0 ) {
                cout << "\nERROR: Invalid length.\n" << endl;
            }
            else {
                // guardar a quantidade de dados
                length = n;
                // reservar area
                data = new T [ n ];
                // ler dados
                for ( int x = 0; x < length; x=x+1 ) {
                    afile >> data[ x ];
                } // end for
            } // end if
            afile.close ( );
        } // end fread ( )

        int searchFirstOdd ( ) { //verificar se possui numeros impares, descartar tamanho, corrigir
            int maiorImpar = 0;
            for (int x = 0; x < length; x=x+1) {
                if(data [ x ] % 2 != 0 ) {
                    maiorImpar = data [ x ];
                    if(data [ x ] > maiorImpar) {
                        maiorImpar = data [ x ];
                    }
                }
            }

            return maiorImpar;
        }

        int addInterval ( int inicio, int fim ) { //validar se tem valores entre os intervalos 
            T soma = 0;
            for(int x = 0; x < length; x=x+1) {
                if(data [ x ] >= inicio && data [ x ] <= fim) {
                    soma = soma + data [ x ];
                }
            }
            return soma;
        }

        double averageInterval ( int inicio, int fim ) {
            T soma = 0;
            int ac = 0;
            for(int x = 0; x < length; x=x+1) {
                if(data [ x ] >= inicio && data [ x ] <= fim) {
                    soma = soma + data [ x ];
                    ac = ac + 1;
                }
            }
            return (double) soma / ac;
        }

        bool negatives ( ) {
            for(int x = 0; x < length; x = x + 1) {
                
            }
             
        } 
        


};

#endif