#ifndef AED1_ED05_H_INCLUDED 
#define AED1_ED05_H_INCLUDED

//Declarações das funções 
void gerar_multiplos_de_tres(int n, int x);

void gerar_multiplos_de_tres_decrescente(int n, int x);

void gerar_inversos_multiplos_de_tres(int n, int count);

void gerar_inversos_multiplos_de_tres_decrescente(int n, int count);

int gerar_valor_somado(int x);

int gerar_adicao_de_valores_impares(int n, int x);

int gerar_soma_adicao_de_valores_impares(int t, int x, int soma);

double gerar_inversos_adicao_de_valores_impares(int t, int x, double soma);

void inverter_string(char *str, int tam);

int contar_digito_par(char *str, int tam);

int verificar_string(char *str, int tam, int qtd);

int fib(int n);

int somar_termo_par_fib(int n, int soma, int ac);

int potencia(int base, int exp);

int somar_potencia(int x, int n, int soma, int pot);

int fat(int n);

double somar_divisao_fatorial(double x, int n, int denominador, double soma);

#endif