#ifndef _CONTATO_HPP_
#define _CONTATO_HPP_

#include <iostream>


#include "myarray.hpp"
#include "mymatriz.hpp"
#include "Erro.hpp"


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


class Contato : public Erro {
    private:
        string nome;
        string fone;

    public:
        ~Contato ( ) { }

        Contato ( ) {
            setErro ( 0 ); 
            nome = "";
            fone = "";
        } 

        Contato ( std::string nome_inicial, std::string fone_inicial ) { // construtor alternativo 
            setErro ( 0 );
            nome = nome_inicial;
            fone = fone_inicial;
        } 

        Contato ( Contato const & another ) { //Construtor baseado em referencia
            setErro ( 0 ); 
            setNome ( another.nome ); 
            setFone ( another.fone ); 
        } 

        void setNome ( std::string nome ) {
            if ( nome.empty ( ) )
                setErro ( 1 ); // nome invalido
            else 
                this->nome = nome;
        } 

        void setFone ( std::string fone ) {
            if ( nome.empty ( ) )
                setErro ( 2 ); // fone invalido
            else 
                this->fone = fone;
        } 

        std::string getNome ( ) {
            return ( this->nome );
        } 

        std::string getFone ( ) {
            return ( this->fone );
        } 

        std::string toString ( ) { // obter dados
            return ( "{ "+getNome( )+", "+getFone( )+" }" );
        } 

        void readName(){
            cout << "Name: ";
            cin.ignore();
            getline( cin, nome);
        }

        void readPhone(){
            cout << "Phone: ";
            cin.ignore();
            getline( cin, fone);
        }
}; 

using ref_Contato = Contato*; 
#endif 