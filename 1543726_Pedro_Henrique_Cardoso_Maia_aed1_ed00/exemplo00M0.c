/*
 Exemplo0005 - v0.0. - __ / __ / _____
 Author: ________________________
 
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0005 exemplo0005.c
 Windows: gcc -o exemplo0005 exemplo0005.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0005
 Windows: exemplo0005
*/
// dependencias
#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
/**
 Metodo 01.
*/
void method_01 ( void )
{
 // identificar
 printf ( "%s\n", "Metodo 01" );
 // encerrar
 printf ( "\nApertar ENTER para continuar.\n" );
 getchar ( );
} // end method_01 ( )
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main ( int argc, char* argv [ ] )
{
// definir dados / resultados
 int opcao = 0;
// identificar
 printf ( "%s\n", "Exemplo0005 - Programa = v0.0" );
 printf ( "%s\n", "Autor: _____________________" );
 printf ( "\n" ); // mudar de linha
// acoes
// repetir
do
 {
 // para mostrar opcoes
 printf ( "\n%s\n", "Opcoes:" );
 printf ( "\n%s" , "0 - Terminar" );
 printf ( "\n%s" , "2 - Metodo 01" );
 printf ( "\n%s" , "3 - Metodo 01" );
 printf ( "\n%s" , "4 - Metodo 01" );
 printf ( "\n%s" , "5 - Metodo 01" );
 printf ( "\n%s" , "6 - Metodo 01" );
 printf ( "\n%s" , "7 - Metodo 01" );
 printf ( "\n%s" , "8 - Metodo 01" );
 printf ( "\n%s" , "9 - Metodo 01" );
 printf ( "\n%s" , "10 - Metodo 01" );
 printf ( "\n%s" , "11- Metodo 01" );
 printf ( "\n%s" , "12 - Metodo 01" );
 printf ( "\n%s" , "13 - Metodo 01" );
 printf ( "\n%s" , "14 - Metodo 01" );
 printf ( "\n%s" , "15 - Metodo 01" );
 printf ( "\n%s" , "16 - Metodo 01" );
 printf ( "\n%s" , "17 - Metodo 01" );
 printf ( "\n%s" , "18 - Metodo 01" );
 printf ( "\n%s" , "19 - Metodo 01" );
 printf ( "\n%s" , "20 - Metodo 01" );
 printf ( "\n%s" , "21- Metodo 01" );
 printf ( "\n" );
 // ler a opcao do teclado
 printf ( "\n%s", "Opcao = " );
 scanf ( "%d", &opcao );
 getchar( ); // para limpar a entrada de dados
 // para mostrar a opcao lida
 printf ( "\n%s%d", "Opcao = ", opcao );
 // escolher acao dependente da opcao
 switch ( opcao )
 {
 case 0: // nao fazer nada
 break;
 case 1: // executar metodo 01
 method_01 ( );
 break;
 default: // comportamento padrao
 printf ( "\nERRO: Opcao invalida.\n" );
 break;
 } // end switch
 }
 while ( opcao != 0 );
// encerrar
 printf ( "\n\nApertar ENTER para terminar." );
 getchar( ); // aguardar por ENTER
 return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 0.5
b.) -0.5
c.) 1.23456789
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
0.2 __/__ mudanca de versao
---------------------------------------------- testes
Versao Teste
0.0 00. ( OK ) identificacao de programa
0.1 01. ( OK ) identificacao de programa
0.2 02. ( OK ) identificacao de programa
leitura e exibicao de inteiro
0.3 03. ( OK ) identificacao de programa
leitura e exibicao mediante escolha
0.4 04. ( OK ) identificacao de programa
leitura e exibicao mediante escolha
0.5 05. ( OK ) identificacao de programa
leitura e exibicao mediante escolha com repeticao
*/