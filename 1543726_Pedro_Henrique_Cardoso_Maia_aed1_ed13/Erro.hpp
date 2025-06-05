#ifndef _ERRO_HPP_
#define _ERRO_HPP_

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

class Erro {
    private:
        int erro;

    protected:
        void setErro ( int codigo ) {
            erro = codigo;
        } 

    public:
        ~Erro ( ){ }
        Erro ( ) {
            erro = 0;
        } 

    int getErro ( ) {
        return ( erro );
    } 
}; 

#endif