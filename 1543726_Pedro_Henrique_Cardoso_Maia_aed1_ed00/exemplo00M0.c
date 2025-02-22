/*
 Exemplo0005 - v0.0. - 15 / 02 / 2005
 Author: Pedro Henrique Cardoso Maia
 
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
#include <stdbool.h> // biblioteca para tipo logico
#include <iso646.h>  // biblioteca para not, and, or, xor
#include <math.h>  // para funcoes matematicas
#include <time.h>   // para funcoes com o tempo
#include <string.h>

#ifndef M_PI //definindo pi
    #define M_PI 3.14159265358979323846
#endif

/*
 Metodo 01.
*/
void method_01 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 01" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_01 ( )

void method_02 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 02" );

    // encerrar com pausa
    printf("%s\n","1543726_Pedro_Henrique_Cardoso_Maia_AED1");
    getchar( );

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_02 ( )

void method_03 ( void ) {
    // identificar
    printf ( "%s\n", "Metodo 03" );

    // tipos de dados
    bool   status   = false; // logico
    int    contador =     0; // inteiro
    float  valor_1  = 0.00f; // real de precisao simples
    double valor_2  =  0.00; // real de precisao dupla
    char   letra    =   'A'; // caracteres 

    // mostrar mensagem  
    printf("%s\n","1543726_Pedro_Henrique_Cardoso_Maia_AED1"); 

    // mostrar valores 
    printf("status  : %d \n", status  );  
    printf("contador: %d \n", contador);
    printf("valor_1 : %f \n", valor_1 );
    printf("valor_2 : %lf\n", valor_2 );
    printf("letra   : %c \n", letra   );

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_03 ( )

void method_04 ( void ) {
    // identificar
    printf ( "%s\n", "Metodo 04" );

    // definir dados
    char   x = 'A';
    int    y =  5 ;
    double z = 1.2;
    
    // iniciar
    printf ("%s\n","1543726_Pedro_Henrique_Cardoso_Maia_AED1"); 
    
    printf("\nOperacoes\n");
    // conformar tipos (type casting)
    y = (int) z;       // truncar para parte inteira
    printf ("z = %lf\t y = %d\n", z, y );
    y = (int) x;       // obter codigo do simbolo
    printf ("x = %c \t y = %d\n", x, y );
    y = x;             // conformacao implicita
    printf ("x = %c \t y = %d\n", x, y );
    printf ("\n");

    x = (char) (32+y); // obter simbolo a partir do codigo
    printf ("y = %d \t x = %c\n", y, x );
    x = (char) (48+(int) z);
    printf ("z = %lf\t x = %c\n", z, x );
    printf ("\n");
                        
    z = z - (int) z;   // isolar parte fracionaria
    printf ("z = %lf\n", z );
    z = (double) x;    // conformacao explicita
    printf ("z = %lf\t x = %c\n", z, x );
    z = 1.0 * x;       // conformacao implicita
    printf ("z = %lf\t x = %c\n", z, x );
    printf ("\n");
    
    z = x / 2;         // metade inteira 
    printf ("z = %lf\n", z );
    z = (double) (x/2);// metade real
    printf ("z = %lf\n", z );
    z = (double) x / 2;
    printf ("z = %lf\n", z );
    z = x / (double) 2;
    printf ("z = %lf\n", z );
    z = (double) x / (double) 2;
    printf ("z = %lf\n", z );
    printf ("\n");
    
    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_04 ( )

void method_05 ( void ) {
    // identificar
    printf ( "%s\n", "Metodo 05" );

    // definir dado
    bool p = true ;
    bool q = false;
    bool r = false;
    char a =   'A';
    char b =   'a';
    int  x =    5 ;
    int  y =    7 ;
    
    
    printf("\nComparacoes\n");
    printf("   (%c==%c) = %d\n", a, a, (a==a));
    printf("   (%c!=%c) = %d\n", a, a, (a!=a));
    printf("\n");
    
    r =  !  (a==a);        // NOT - logical negation
    printf(" ! (%c==%c) = %d\n", a, a, r);
    r =  !  (a!=a);        // NOT - logical complement
    printf(" ! (%c!=%c) = %d\n", a, a, r);
    r = not (a==a);        // NOT - logical negation
    printf("not(%c==%c) = %d\n", a, a, r);
    printf("\n");

    r = (x<y)  &&  (x!=0); // AND - logical conjunction
    printf("(%d<%d)  && (%d!=0)= %d\n", x,y,x,r);
    r = (x<y)  and (x!=0); // AND - logical conjunction
    printf("(%d<%d) and (%d!=0)= %d\n", x,y,x,r);
    r = (x>=y) ||  (x!=0); // OR  - logical disjunction
    printf("(%d>=%d) || (%d!=0)= %d\n", x,y,x,r);
    r = (x>=y) or  (x!=0); // OR  - logical disjunction
    printf("(%d<%d)  or (%d!=0)= %d\n", x,y,x,r);
    r = (x<=y) &&  (x> 0); // AND - logical conjunction
    printf("(%d<%d)  && (%d> 0)= %d\n", x,y,x,r);
    r = (x<=y) and (x> 0); // AND - logical conjunction
    printf("(%d<%d) and (%d> 0)= %d\n", x,y,x,r);
    printf("\n");

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_05 ( )

void method_06 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 06" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    // definir dado
    bool p = true ;
    bool q = false;
    bool r = false;
    
    printf("     p = %d\n", p);
    printf("     q = %d\n", q);
    printf("\n");
    
    printf("\nNegacao\n");
    r = ! p;    // NOT - logical negation
    printf(" !   p = %d\n", r);
    r = ! q;    // NOT - logical complement
    printf(" !   q = %d\n", r);
    r = not p;  // NOT - logical negation
    printf("not  p = %d\n", r);
    printf("\n");

    printf("\nConjuncao\n");
    printf("0 && 0 = %d\n", (0 && 0) );
    printf("0 && 1 = %d\n", (0 && 1) );
    printf("1 && 0 = %d\n", (1 && 0) );
    printf("1 && 1 = %d\n", (1 && 1) );
    printf("\n");

    printf("\nDisjuncao\n");
    printf("0 || 0 = %d\n", (0 || 0) );
    printf("0 || 1 = %d\n", (0 || 1) );
    printf("1 || 0 = %d\n", (1 || 0) );
    printf("1 || 1 = %d\n", (1 || 1) );
    printf("\n");

    printf("\nDisjuncao exclusiva\n");
    printf("0 ^  0 = %d\n", (0 ^  0) );
    printf("0 ^  1 = %d\n", (0 ^  1) );
    printf("1 ^  0 = %d\n", (1 ^  0) );
    printf("1 ^  1 = %d\n", (1 ^  1) );
    printf("\n");

    printf("\nOperacoes logicas\n");
    r = p &&  q; // AND - logical conjunction
    printf("p &&  q = %d\n", r);
    r = p and q; // AND - logical conjunction
    printf("p and q = %d\n", r);
    r = p ||  q; // OR  - logical disjunction
    printf("p ||  q = %d\n", r);
    r = p or  q; // AND - logical conjunction
    printf("p or  q = %d\n", r);
    printf("\n");

    r = p ^   q; // XOR - logical exclusive disjunction
    printf("p  ^  q = %d\n", r);
    r = p xor q; // XOR - logical exclusive disjunction
    printf("p xor q = %d\n", r);
    r = p ^   p; // XOR - logical exclusive disjunction
    printf("p  ^  p = %d\n", r);
    r = p xor p; // XOR - logical exclusive disjunction
    printf("p xor p = %d\n", r);
    printf("\n");

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_06 ( )

void method_07 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 07" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    int valor = 0;

    // entrar dado
    printf("Enter a number: ");
    scanf("%d", &valor); getchar( ); // ler e limpar

    // testar se valor negativo
    if(valor < 0) {
        printf("%d -> negativo\n", valor); 
    }
    
    // testar se valor menor que 100
    if(valor < 100) {
        printf("%d menor que 100\n", valor); 
    }
    else {
    // testar se igual a 100
        if(valor == 100) {
        printf("%d igual a cem\n", valor);
        }
        else {
        printf("%d diferente de 100\n", valor ); 
        }
    }

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_07 ( )


void method_08 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 08" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  
    int opcao = 0;

    // entrar com a opcao
    printf("%s", "Opcao: ");
    scanf("%d", &opcao);  getchar( );

    // escolher acao dependente da opcao
    switch(opcao) {
        case 0: 
        printf("%s\n", "Opcao 0 escolhida");
        break;

        case 1: 
        printf("%s\n", "Opcao 1 escolhida");
        break;

        case 2: 
        printf("%s\n", "Opcao 2 escolhida");
        break;

        default: // caso for outra opcao
        printf("%s\n", "Outra opcao escolhida");
        break;
    }

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_08 ( )


void method_09 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 09" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  
    int opcao = 0;

    // repetir ate' escolher zero e parar
    do
    {
        // entrar com a opcao
        printf("%s", "Opcao: ");
        scanf("%d", &opcao);  getchar();

        switch(opcao)
        {
        case 0: 
            printf("%s\n", "Opcao 0 escolhida");
            break;

        case 1: 
            printf("%s\n", "Opcao 1 escolhida");
            break;

        case 2: 
            printf("%s\n", "Opcao 2 escolhida");
            break;

        default:
            printf("%s\n", "Outra opcao escolhida");
            break;
        }
    }
    while(opcao != 0);

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_09 ( )


void method_10 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 10" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    // definir dado
    int x = 0;
    
    // repetir enquanto condicao verdadeira
    while(x < 5)
    {
    // mostrar valor atual
        printf("%d\n", x);
    // passar ao seguinte (em ordem crescente)  
        x = x+1;   
    }

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_10 ( )


void method_11 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 11" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    // definir dado
    int x = 5;
    
    // repetir enquanto condicao verdadeira
    while(x > 0)
    {
    // mostrar valor atual
        printf("%d\n", x);
    // passar ao seguinte (em ordem decrescente)  
        x = x-1;   
    }

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_11 ( )

void method_12 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 12" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    // definir dado
    int x = 0;
    
    // mostrar mensagem com formato 
    printf ("%s\n","999999_AED1"); 
    
    // repetir enquanto condicao verdadeira
    for(x=0; x < 5; x=x+1)
    {
    // mostrar valores em ordem crescente
        printf("%d\n", x);
    }


    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_12 ( )


void method_13 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 13" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    // definir dado
    int x = 0;
    
    // repetir enquanto condicao verdadeira
    for(x = 5; x > 0; x=x-1)
    {
    // mostrar valores em ordem decrescente
        printf("%d\n", x);
    }

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_13 ( )


void print_header(const char* message) {
    // mostrar mensagem com formato 
    printf ("%s\n", message); 
}

    /*
    Procedimento para mostrar rodape'.
    @param message - texto a ser mostrado
    */
void print_footer(const char* message) {
    // mostrar mensagem com formato 
    printf("%s\n", message);
    getchar( );
}

void method_14 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 14" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  
  
    // mostrar mensagem com formato (local)
    printf ("%s\n", "de volta ao main()"); 
    
    // encerrar
    print_footer ("Apertar ENTER para terminar.");

}  // end method_14 ( )


void method_15 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 15" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

     // mostrar mensagem com formato (local)
    printf ("%s\n", "de volta ao main()"); 
  
    // encerrar
    print_footer ("Apertar ENTER para terminar.");

}  // end method_15 ( )

// functions
/*
   Funcao para determinar o maior valor.
   @return maior valor
   @param x - primeiro valor
   @param y - segundo  valor
 */

int max(int x, int y)
{
    int z = 0;
    if ( x > y )
	   z = x;
	else
	   z = y;
	return ( z );
}

/*
   Funcao para determinar o menor valor.
   @return menor valor
   @param x - primeiro valor
   @param y - segundo  valor
*/

int min(int x, int y)
{
    int z = x;
    if ( y < x )
	   z = y;
	return ( z );
}

void method_16 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 16" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    // definir dados
    int    x =  3 ;
    int    y =  5 ;
    int    z =  7 ;
    
    // aplicar funcoes
    printf ("\nAplicar funcoes\n");
    printf ("maior(%d,%d) = %d\n", 
            x, y, max(x,y));  
    printf ("\n");
    printf ("maior(%d,%d,%d) = %d\n", 
            x, y, z, max(x,max(y,z)));  
    printf ("\n");
    printf ("menor(%d,%d) = %d\n", 
            x, y, min(x,y));  
    printf ("\n");
    printf ("menor(%d,%d,%d) = %d\n", 
            x, y, z, min(min(x,y),z));  
    printf ("\n");
  
    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_16 ( )

/*
  Funcao para elevar ao quadrado.
  @return quadrado do valor
  @para x - valor com o qual calcular
 */
double sqr(double x)
{  return(x*x);      }

/*
  Funcao para calcular o logaritmo base 2.
  @return logaritmo base 2 do valor
  @para x - valor com o qual calcular
 */
double lg (double x)
{  return(log10(x)/log10(2.0)); }


void method_17 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 17" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

        // definir dados
    int    x =  0 ;
    double y = 1.5;
    

    // aplicar funcoes
    printf("\nAplicar funcoes\n");
    printf("floor(%lf) = %lf\n", y, floor(y));  // piso
    printf("\n");
    printf("ceil(%lf)  = %lf\n", y, ceil(y));   // teto 
    printf("\n");

    x = (int)trunc(y);  // truncar
    printf("trunc(%lf) = %d\n", y, x);  
    printf("\n");

    x = (int)round(y);  // arredondar
    printf("round(%lf) = %d\n", y, x);  
    printf("\n");
    
    // funcoes trigonometricas em radianos
    y = sin(30.0 * M_PI / 180.0);  // seno
    printf("sin(30) = %5.2lf\n", y);
    
    y = cos(60.0 * M_PI / 180.0);  // cosseno
    printf("cos(60) = %5.2lf\n", y);
    
    y = atan(1.00) * 180.0 / M_PI; // arco tangente
    printf("atan(1) = %5.2lf\n", y);
    printf("\n");
    
    y = pow(2.0, 3.0);  // potencia
    printf("pow(2,3) = %5.0lf\n", y);
    
    y = lg(y);  // logaritmo base 2
    printf("lg(8)  = %5.0lf\n", y);
    printf("\n");

    y = sqr(2.0);  // quadrado
    printf("sqr(2)   = %5.0lf\n", y);
    
    y = sqrt(y);  // raiz quadrada
    printf("sqrt(4)  = %5.0lf\n", y);
    printf("\n");

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_01 ( )


void method_18 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 18" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    char  s1 [  ] = "abc" ;// cadeia de caracteres
    char  s2 [10] ;        // espaco para cadeia de caracteres
    strcpy   (s2  , "def");// copiar caracteres
    char *s3      = "ghi" ;// apontar para constante 
    
    // aplicar funcoes
    printf ("\nAplicar funcoes\n");
    // mostrar valor e tamanho
    printf ("s1 = [%s] (%d)\n", s1, strlen(s1) );
    printf ("s2 = [%s] (%d)\n", s2, strlen(s2) );
    printf ("s3 = [%s] (%d)\n", s3, strlen(s3) );
    printf ("\n");
    
    // mostrar valor apontado
    s3 = &s1[0];  // obter endereco do primeiro caractere
    printf ("s1 = [%s] (%d)\n", s3, strlen(s3));
    s3 = &s2[0];  // obter endereco do primeiro caractere
    printf ("s2 = [%s] (%d)\n", s3, strlen(s3));
    printf ("\n");
    
    strcat(s2,s1);   // concatenar
    printf ("s1 = [%s] (%d)\n", s1, strlen(s1));
    printf ("s2 = [%s] (%d)\n", s2, strlen(s2));
    printf ("\n");
    
    s3 = s1;         // identicos
    printf ("s1 = [%s] (%d) (%p)\n", 
            s1, strlen(s1), &s1[0]);
    printf ("s3 = [%s] (%d) (%p)\n", 
            s3, strlen(s3), s3    );
    printf ("\n");

    // reservar area para armazenar
    s3 = calloc(strlen(s1)+1, sizeof(char));
    strcpy(s3,s1);   // copiar conteudo
    
    printf ("s1 = [%s] (%d) (%p)\n", 
            s1, strlen(s1), &s1[0]);
    printf ("s3 = [%s] (%d) (%p)\n", 
            s3, strlen(s3), s3    );
    printf ("\n");

    s3 = strdup(s1); // duplicar
    printf ("s1 = [%s] (%d) (%p)\n", 
            s1, strlen(s1), &s1[0]);
    printf ("s3 = [%s] (%d) (%p)\n", 
            s3, strlen(s3), s3    );
    printf ("\n");

    // comparar
    if (strcmp(s1,s3) == 0) // pela igualdade
        printf("%s igual a %s\n"   , s1, s3);
    if (strcmp(s1,s3) != 0) // pela diferenca
        printf("%s igual a %s\n"   , s1, s3);
    if (strcmp(s1,s2) <  0) // antecessor
        printf("%s antecede a %s\n", s1, s2);
    if (strcmp(s2,s1) >  0) // sucessor
        printf("%s sucede a %s\n"  , s2, s1);
    printf ("\n");

    // mostrar cada letra separadamente
    for (int x=0; x < strlen(s1); ++x)
        printf("%c ", s1[x]);
    printf ("\n");
        
    // mostrar cada letra separadamente 
    // com apontador
    for (int x=0; x < strlen(s1); x++)
        printf("%c ", *(s1+x));
    printf ("\n");
        
    // mostrar cada letra separadamente 
    // com apontador operado aritmeticamente
    s3 = &s1[0];
    while ( *s3 )
    {
        printf("%c ", *s3);
        s3++;
    }
    printf ("\n");
            
    // mostrar cada letra separadamente
    // em ordem inversa, com indexador
    for (int x=strlen(s1)-1; x>=0; --x)
        printf("%c ", s1[x]);
    printf ("\n");
    printf ("\n");
	  

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_01 ( )

/*
  Procedimento para mostrar arranjo de inteiros.
  @param n - quantidade de dados
  @param v - apontador para arranjo de inteiros
*/
void print_array(int n, int *v)
{
  for(int x=0; x < n; x=x+1)
  {  printf("%d ", v[x]);  }
  printf("\n");
}

/*
  Procedimento para ler arranjo de inteiros.
  @param n - quantidade de dados
  @param v - apontador para arranjo de inteiros
*/
void scan_array(int n, int *v)
{
  for(int x=0; x < n; x=x+1)
  {  scanf("%d", &v[x]); getchar( );  }
  printf("\n");  
}

void method_19 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 19" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    // definir dados
    int a [ ] = {1,2,3};  // arranjo com valores
    int b [3];            // espaco para arranjo
                            // definir valores iniciais
    b[0] = 4; b[1] = 5; b[2] = 6;
                            // reservar espaco
    int *c    = malloc(3 * sizeof(int));
                            // definir valores iniciais
    if ( c )              // se houver espaco reservado
        for(int x=0; x < 3; x=x+1)
        { c[x] = (x+1)*10; }
  

    // aplicar metodos sobre em arranjos
    printf("\nOperacoes com arranjos\n");
    printf("a:\n");
    print_array(3, a);
    printf("\n");
    
    printf("b:\n");
    print_array(3, b);
    printf("\n");

    printf("c:\n");
    print_array(3, c);
    printf("\n");

    // ler     dados para arranjo
    printf("Entrar dados:\n");
    scan_array(3, c);
    printf("c:\n");
    // mostrar dados em   arranjo
    printf("\nDados lidos (c):\n");
    print_array(3, c);
    printf("\n");

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_19 ( )

/*
  Procedimento para mostrar matriz.
  @param m - quantidade de linhas
  @param n - quantidade de colunas
  @param v - referencia para matriz de inteiros
 */
void print_matrix(int m, int n, int v[][n])
{
  for(int x=0; x < m; x=x+1)
  {
    for(int y=0; y < n; y=y+1)
    {  printf("%d ", v[x][y]);  }
    printf("\n");
  }	
}

/*
  Procedimento para ler matriz.
  @param m - quantidade de linhas
  @param n - quantidade de colunas
  @param v - referencia para matriz de inteiros
*/
void scan_matrix(int m, int n, int v[][n])
{
  for(int x=0; x < m; x=x+1)
  {
    for(int y=0; y < n; y=y+1)
    {  scanf("%d", &v[x][y]); getchar( );  }
    printf("\n");
  }	
  printf("\n");  
}

void method_20 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 20" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    // definir dados
    int a [ ][3] = {{1,2,3},  // definir com valores
                    {4,5,6}};
    int b [2][3];             // espaco para matriz
                                // definir valores iniciais
    b[0][0] = 6; b[0][1] = 5; b[0][2] = 4;
    b[1][0] = 3; b[1][1] = 2; b[1][2] = 1;
    

    // aplicar metodos sobre em matrizeos
    printf("\nOperacoes com matrizes\n");
    // mostrar dados
    printf("a:\n");
    print_matrix(2,3, a);
    printf("\n");
    
    printf("b:\n");
    print_matrix(2,3, b);
    printf("\n");

    // ler dados para matriz
    printf("Entrar dados:\n");
    scan_matrix(2,3, a);
    printf("a:\n");
    print_matrix(2,3, a);
    printf("\n");

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_20 ( )

void method_21 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 21" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    // definir dados
    srand(time(NULL)); // semear aleatoriedade
    FILE *a = fopen("DATA.TXT","w"); // abrir para gravar
    int   n = 5;
    int   b = 0;  
    
    // gravar valores
    fprintf(a, "%d\n", n);      // guardar a quantidade
    for(int x = 0; x < n; x = x+1)
    {  fprintf(a, "%d\n", rand()%100); }
    fclose(a);                  // fechar (INDISPENSAVEL)
        
    // ler valores 
    a = fopen("DATA.TXT","r");  // abrir para ler
    fscanf(a, "%d", &n);        // obter  a quantidade
    // ler e mostrar dados
    printf("\nDados em arquivo:\n");
    for(int x = 0; x < n; x = x+1)
    {  
        fscanf(a, "%d", &b);   
        printf("%d\n", b); 
    }
    fclose(a);                  // fechar (RECOMNDAVEL)
    
    printf("\n");

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_01 ( )

void method_22 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 22" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

      // definir dados
    FILE *a = fopen("DATA.TXT","r");
    int   n = 0;
    int  *b = NULL;  

    // ler valores 
    a = fopen("DATA.TXT","r");
    fscanf(a, "%d", &n);
    // reservar espaco para guardar dados
    b = malloc(n * sizeof(int));
    for(int x = 0; x < n; x = x+1)
    {  fscanf(a, "%d", &b[x]);   }
    fclose(a);
    
    // mostrar dados
    printf("\nDados em arquivo:\n");
    for(int x = 0; x < n; x = x+1)
    {  printf("%2d\n", b[x]);   }
    printf("\n");

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_01 ( )

// definir novo tipo 
typedef
 struct s_array // descritor do tipo
 {
  int  n;
  int *data;  
 }
Array;          // nome do tipo

void method_23 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 23" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    // definir dados
    FILE *a = fopen("DATA.TXT","r");
    struct s_array b;

    // ler valores 
    a = fopen("DATA.TXT","r");
    fscanf(a, "%d", &b.n);
    b.data = malloc(b.n * sizeof(int));
    for(int x = 0; x < b.n; x = x+1)
    {  fscanf(a, "%d", &b.data[x]);   }
    fclose(a);
    
    // mostrar valores 
    printf("\nDados guardados:\n");
    for(int x = 0; x < b.n; x = x+1)
    {  printf("%2d\n", b.data[x]);   }
    printf("\n");

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_23 ( )

void method_24 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 24" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

      // definir dados
    FILE *a = fopen("DATA.TXT","r");
    Array b;
    
    // mostrar mensagem  
    printf("%s\n","999999_AED1"); 

    // ler valores 
    a = fopen("DATA.TXT","r");
    fscanf(a, "%d", &b.n);
    b.data = malloc(b.n * sizeof(int));
    for(int x = 0; x < b.n; x = x+1)
    {  fscanf(a, "%d", &b.data[x]);}
    fclose(a);
    
    // mostrar valores 
    printf("\nDados guardados:\n");
    for(int x = 0; x < b.n; x = x+1)
    {  printf("%2d\n", b.data[x]); }
    printf("\n");

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_24 ( )


void method_25 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 25" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    // definir dados
    FILE  *a = fopen("DATA.TXT","r");
    Array *b = NULL;
    
    // ler valores 
    a = fopen("DATA.TXT","r");
    b = malloc(1 * sizeof(Array));
    // testar se ha' espaco para guardar dados
    if (b != NULL)
    {
        // ler dados com apontadores
        fscanf(a, "%d", &(*b).n);
        (*b).data = malloc((*b).n * sizeof(int));
        for(int x = 0; x < (*b).n; x = x+1)
        {  fscanf(a, "%d", &(*b).data[x]);}
    
        // mostrar valores
        printf("\nDados guardados:\n");
        for(int x = 0; x < (*b).n; x = x+1)
        {  printf("%2d\n", (*b).data[x]); }
    }
    fclose(a);
    printf("\n");

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_25 ( )

void method_26 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 26" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    // definir dados
    FILE  *a = fopen("DATA.TXT","r");
    Array *b = NULL;
    

    // ler valores 
    a = fopen("DATA.TXT","r");
    // reservar espaco para guardar dados
    b = malloc(1 * sizeof(Array));
    // testar se ha' espaco para guardar dados
    if (b != NULL)
    {
        // ler dados com apontadores (outra notacao)
        fscanf(a, "%d", &b->n);
        b->data = malloc(b->n * sizeof(int));
        for(int x = 0; x < b->n; x = x+1)
        {  fscanf(a, "%d", &b->data[x]);}
    
        // mostrar valores           (outra notacao)
        printf("\nDados guardados:\n");
        for(int x = 0; x < b->n; x = x+1)
        {  printf("%2d\n", b->data[x]); }
    }
    fclose(a);
    printf("\n");
    

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_01 ( )

// definir novo tipo 
typedef
 struct s_matrix // descritor do tipo
 {
  int   rows;
  int   columns;
  int **data;  
 }
Matrix;          // nome do tipo

void method_27 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 27" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

    // definir dados
    Matrix *a = NULL;
    
    // reservar espaco para descritor 
    a = malloc(1 * sizeof(Matrix));
    // testar se ha' espaco reservado 
    if(a == NULL)
    {
        // mostrar codigo de erro    
        printf("Erro = %d\n", errno);
        perror("Error");
    }
    else 
    {
        // reservar espaco para guardar linhas
        a->rows    = 2;
        a->columns = 3;
        a->data    = malloc(a->rows * sizeof(int*));
        // testar se ha' espaco para guardar dados
        if (a->data != NULL)
        {
        // reservar espaco para guardar colunas
        for(int x=0; x<2; x=x+1)
        {
            a->data[x] = malloc(a->columns * sizeof(int));
            if (a->data[x])
            {  // ler dados com apontadores
                printf("\nDados para a linha %d matriz:\n", x);       
                for(int y = 0; y < a->columns; y = y+1)
                {  scanf("%d", &a->data[x][y]);  }
            }
        }
    
        // mostrar valores
        printf("\nDados guardados:\n");       
        for(int x = 0; x < a->rows; x = x+1)
        {
            for(int y = 0; y < a->columns; y = y+1)
            {  printf("%2d\t", a->data[x][y]); }
            printf("\n");
        }
        }
    }
    printf("\n");
  

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_27 ( )

typedef enum Semana { Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado } Dias_da_Semana;

void method_28 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 28" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

        // definir dados
    char Semana_str[7][8]; // para guardar lista de nomes
    
    strcpy(Semana_str[Domingo], "Domingo");
    strcpy(Semana_str[Segunda], "Segunda");
    strcpy(Semana_str[Terca  ], "Terca  ");
    strcpy(Semana_str[Quarta ], "Quarta ");
    strcpy(Semana_str[Quinta ], "Quinta ");
    strcpy(Semana_str[Sexta  ], "Sexta  ");
    strcpy(Semana_str[Sabado ], "Sabado ");

    // mostrar valores 
    printf("\nMostrar dias da semana:\n");
    for(enum Semana dia=Domingo; dia<=Sabado; dia=dia+1)
    {
        printf("%d: %s\n", dia, Semana_str[dia]);
    }  
    printf("\n");

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_28 ( )

void method_29 ( void ) {
    // identificar
    printf ( "%s\n", "\nMetodo 29" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

      // definir dados
    char Semana_str[ ][8] // para guardar lista de nomes
    = {"Domingo", 
        "Segunda", 
        "Terca  ",
        "Quarta ",
        "Quinta ",
        "Sexta  ", 
        "Sabado "};

    // mostrar mensagem  
    printf("%s\n","999999_AED1"); 

    // mostrar valores 
    printf("\nMostrar dias da semana:\n");
    for(Dias_da_Semana dia=Domingo; dia<=Sabado; dia=dia+1)
    {
        printf("%d: %s\n", dia, Semana_str[dia]);
    }  
    printf("\n");

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_29 ( )

void method_30 (int argc, char **argv) {
    // identificar
    printf ( "%s\n", "\nMetodo 30" );

    // mostrar mensagem com identificacao 
    printf("1543726_Pedro_Henrique_Cardoso_Maia_AED1\n");
    // encerrar normalmente  

        // mostrar valores 
    printf("\nQuantidade de argumentos: %d\n", argc);
    printf("\nArgumentos:\n");
    for(int x = 0; x < argc; x = x+1)
    {  printf("%d: %s\n", x, argv[x]); }
    printf("\n");

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ( );
}  // end method_30 ( )


/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main ( int argc, char* argv [ ] ) {
    // definir dados / resultados
    int opcao = 0;
    // identificar
    printf ( "%s\n", "Exemplo00M0.c - Programa = v0.0" );
    printf ( "%s\n", "Autor: Pedro Henrique Cardoso Maia" );
    printf ( "\n" ); // mudar de linha
    // acoes
    // repetir
    do {
        // para mostrar opcoes
        printf ( "\n%s\n", "Opcoes:" );
        printf ( "\n%s" , "0 - Terminar" );
        printf ( "\n%s" , "01 - Metodo 01" );
        printf ( "\n%s" , "02 - Metodo 02" );
        printf ( "\n%s" , "03 - Metodo 03" );
        printf ( "\n%s" , "04 - Metodo 04" );
        printf ( "\n%s" , "05 - Metodo 05" );
        printf ( "\n%s" , "06 - Metodo 06" );
        printf ( "\n%s" , "07 - Metodo 07" );
        printf ( "\n%s" , "08 - Metodo 09" );
        printf ( "\n%s" , "09 - Metodo 09" );
        printf ( "\n%s" , "10 - Metodo 10" );
        printf ( "\n%s" , "11 - Metodo 11" );
        printf ( "\n%s" , "12 - Metodo 12" );
        printf ( "\n%s" , "13 - Metodo 13" );
        printf ( "\n%s" , "14 - Metodo 14" );
        printf ( "\n%s" , "15 - Metodo 15" );
        printf ( "\n%s" , "16 - Metodo 16" );
        printf ( "\n%s" , "17 - Metodo 17" );
        printf ( "\n%s" , "18 - Metodo 18" );
        printf ( "\n%s" , "19 - Metodo 19" );
        printf ( "\n%s" , "20 - Metodo 20" );
        printf ( "\n%s" , "21 - Metodo 21" );
        printf ( "\n%s" , "22 - Metodo 22" );
        printf ( "\n%s" , "23 - Metodo 23" );
        printf ( "\n%s" , "24 - Metodo 24" );
        printf ( "\n%s" , "25 - Metodo 25" );
        printf ( "\n%s" , "26 - Metodo 26" );
        printf ( "\n%s" , "27 - Metodo 27" );
        printf ( "\n%s" , "28 - Metodo 28" );
        printf ( "\n%s" , "29 - Metodo 29" );
        printf ( "\n%s" , "30 - Metodo 30" );

        // ler a opcao do teclado
        printf ( "\n%s", "Opcao = ");
        scanf ( "%d", &opcao );
        getchar( ); // para limpar a entrada de dados
        // para mostrar a opcao lida
        printf ( "\n%s%d", "Opcao = ", opcao );
        // escolher acao dependente da opcao
        switch ( opcao ) {
            case 0: // nao fazer nada
            break;

            case 1: // executar metodo 01
            method_01 ( );
            break;

            case 2: // executar metodo 01
            method_02 ( );
            break;

            case 3: // executar metodo 01
            method_03 ( );
            break;

            case 4: // executar metodo 01
            method_04 ( );
            break;

            case 5: // executar metodo 01
            method_05 ( );
            break;

            case 6: // nao fazer nada
            method_06 ( );
            break;

            case 7: // executar metodo 01
            method_07 ( );
            break;

            case 8: // executar metodo 01
            method_08 ( );
            break;

            case 9: // executar metodo 01
            method_09 ( );
            break;

            case 10: // executar metodo 01
            method_10 ( );
            break;

            case 11: // executar metodo 01
            method_11 ( );
            break;

            case 12: // nao fazer nada
            method_12 ( );
            break;

            case 13: // executar metodo 01
            method_13 ( );
            break;

            case 14: // executar metodo 01
            method_14 ( );
            break;

            case 15: // executar metodo 01
            method_15 ( );
            break;

            case 16: // executar metodo 01
            method_16 ( );
            break;

            case 17: // executar metodo 01
            method_17 ( );
            break;

            case 18: // nao fazer nada
            method_18 ( );
            break;

            case 19: // executar metodo 01
            method_19 ( );
            break;

            case 20: // executar metodo 01
            method_20 ( );
            break;

            case 21: // executar metodo 01
            method_21 ( );
            break;

            case 22: // executar metodo 01
            method_22 ( );
            break;

            case 23: // executar metodo 01
            method_23 ( );
            break;

            case 24: // nao fazer nada
            method_24 ( );
            break;

            case 25: // executar metodo 01
            method_25 ( );
            break;

            case 26: // executar metodo 01
            method_26 ( );
            break;

            case 27: // executar metodo 01
            method_27 ( );
            break;

            case 28: // executar metodo 01
            method_28 ( );
            break;

            case 29: // executar metodo 01
            method_29 ( );
            break;

            case 30: // executar metodo 01
            method_30 (argc, argv);
            break;

            default: // comportamento padrao
            printf ( "\nERRO: Opcao invalida.\n" );
            break;
        } // end switch
    } while ( opcao != 0 );
    // encerrar
    printf ( "\n\nApertar ENTER para terminar." );
    getchar( ); // aguardar por ENTER
    return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )


