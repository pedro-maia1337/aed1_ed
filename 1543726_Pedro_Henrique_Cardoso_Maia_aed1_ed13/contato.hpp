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
            if ( fone.empty ( ) )
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
            string newName;
            cout << "Name: ";
            cin.ignore();
            getline( cin, newName);
            setNome(newName);
        }

        void readPhone(){
            string newPhone;
            cout << "Phone: ";
            cin.ignore();
            getline( cin, newPhone);
            setFone(newPhone);
        }

        bool isValidPhone() { 
            //validar se tem 9 ou 8 digitos
            //validar se esta em branco
            //validar se tem só numeros ou (-) pensar nisso aqui 

            int strlen = fone.length();

            if(strlen != 9 || strlen != 8) return false;
            
            for (char c : fone) {
                if (!isdigit(c)) return false ;
            }

            return true;
        }

        void writeToFile(string filename) {
            ofstream afile; // output file
            afile.open ( filename );
            afile << nome << endl;
            afile << fone << endl;
            afile.close ( );
        } // end fprint ( )
}; 

using ref_Contato = Contato*; 
#endif 