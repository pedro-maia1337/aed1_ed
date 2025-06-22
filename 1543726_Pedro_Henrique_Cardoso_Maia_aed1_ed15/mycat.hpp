#ifndef _MYCAT_HPP_
#define _MYCAT_HPP_

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
#include <string.h>

#define MAX_SIZE 256

template < typename T >

class Cat {
    public: 
    //Priorizar soluções sem o '\o'
        char* str_push_back ( char *s, char c ) {
            //@return apontador para a cadeia atualizada
            //@param s - apontador para cadeia de caracteres
            //@param c - caractere a ser inserido

            int len = strlen(s);

            if (s == nullptr || len <= 0) {
                cout << "Erro: cadeia inválida ou vazia.\n";
            } else { 
                s[len] = c;
                s[len + 1] = '\0';
            }
            len = 0;

            return s;
        }

        char* str_pop_back ( char *s ) {
            //@return  apontador para a cadeia atualizada, ou vazia, 
            //@param s - apontador para cadeia de caracteres

            int apt = strlen(s);

            if(apt <= 0 ) {
                cout << "Cadeia invalida";
            } else {
                s[apt - 1] = '\0';
            }
            apt = 0;

            return s;
        }

        char* str_push_front (char *s,  char c){
            //@return  apontador para a cadeia atualizada 
            //@param c - caractere a ser inserido 
            //@param s - apontador para cadeia de caracteres

            int len = strlen(s);
            if (s == nullptr || len <= 0) {
                cout << "Erro: cadeia inválida ou vazia.\n";
            } else { 
                for (int i = len; i >= 0; i=i-1) {
                    s[i + 1] = s[i]; // desloca pra direita
                }
                s[0] = c; 
            }
            len = 0;

            return s;
        }

        char* str_pop_front ( char *s ) {
            //@return  apontador para a cadeia atualizada, ou vazia, 
            //@param s - apontador para cadeia de caracteres

            int len = strlen(s);
            if (s == nullptr || len <= 0) {
                cout << "Erro: cadeia inválida ou vazia.\n";
            } else { 
                for (int i = 1; i <= len; i=i+1) {
                    s[i - 1] = s[i]; // desloca pra esquerda
                }           
            }
            len = 0;

            return s;
        }

        char* str_push_mid ( char *s, char c ) {
            //@return  apontador para a cadeia atualizada 
            //@param s - apontador para cadeia de caracteres 
            //@param c - caractere a ser inserido

            int len = strlen(s);
            int apt = strlen(s) / 2;
            if (s == nullptr || len <= 0) {
                cout << "Erro: cadeia inválida ou vazia.\n";
            } else { 
                for (int i = len; i >= apt; i=i-1) {
                    s[i + 1] = s[i]; 
                }
                s[len / 2] = c; 
            }
            apt = 0;

            return s;
        }

        char* str_pop_mid ( char *s ) { // voltar
        //@return  apontador para a cadeia atualizada 
        //@param s - apontador para cadeia de caracteres

            int len = strlen(s);
            int apt = strlen(s) / 2;
            if (s == nullptr || len <= 0) {
                cout << "Erro: cadeia inválida ou vazia.\n";
            } else { 
                for (int i = apt; i <= len; i=i+1) {
                    s[i] = s[i + 1];
                }
            }
            apt = 0;

            return s;
        }

        char* str_insert ( char *s, char c, int index) {
            //@return  apontador para a cadeia atualizada 
            //@param s        - apontador para cadeia de caracteres 
            //@param c - caractere a ser inserido 
            //@param index - posicao onde inserir

            int len = strlen(s);
            int apt = index;

            if(index < 0 || index > len) {
                cout << "Posicao invalida";
                return nullptr;
            }

            if (s == nullptr || len <= 0) {
                cout << "Erro: cadeia inválida ou vazia.\n";
            } else { 
                for (int i = len; i >= apt; i=i-1) {
                    s[i + 1] = s[i]; 
                }
                s[apt] = c; 
            }
            apt = 0;

            return s;
        }

        char* str_remove ( char *s, int index) {
            //@return  apontador para a cadeia atualizada 
            //@param s        - apontador para cadeia de caracteres 
            //@param index - posicao de onde remover

            int len = strlen(s);
            int apt = index;

            if(index < 0 || index > len) {
                cout << "Posicao invalida";
                return nullptr;
            }

            if (s == nullptr || len <= 0) {
                cout << "Erro: cadeia inválida ou vazia.\n";
            } else { 
                for (int i = apt; i <= len; i=i+1) {
                    s[i] = s[i + 1];
                }
            }
            apt = 0;

            return s;
        }

        char* str_chr(char* s, char c) {

            //@return apontador para a primeira ocorrência; nullptr (NULL), caso contrario 
            //@param s - apontador para cadeia de caracteres 
            //@param c - caractere a ser procurado

            int len = strlen(s);

            if(s == nullptr || len <= 0) {
                cout << "Erro: cadeia inválida ou vazia.\n";
                return nullptr;
            } else {
                for (int i = 0; i < len; i=i+1) {
                    if (s[i] == c) {
                        return &s[i];
                    }
                }
            }

            len = 0;

            return nullptr;
        }

        char* str_tok ( char *s, char delimiter ) {
            //@return apontador para caracteres; nullptr (NULL),, caso contrario 
            //@param s             - apontador para cadeia de caracteres 
            //@param delimiter - caractere a ser procurado
            
            int len = strlen(s);
            int i = 0;

            if(s == nullptr || len <= 0) {
                cout << "Erro: cadeia inválida ou vazia.\n";
            } else {
                while (s[i] != '\0') {
                    if (s[i] == delimiter) {
                        s[i] = '\0';         
                    return s;
                }
                    i=i+1;
                }
            }

            return s;
        }
 
};

#endif