#ifndef AED1_ED05_H_INCLUDED 
#define AED1_ED05_H_INCLUDED

//Declarações das funções 
int potencia(int x, int y);
void multiplos_de_tres(int n, int i);
void multiplos_de_cinco_e_tres(int n, int i);
void potencia_de_quatro(int n, int pot);
void inverso_multiplos_de_tres(int n, int i);
void denominador_crescente(int n, double x , int pot, double denominador);
int soma_valores_multiplos_de_tres(int n, int x, int count);
double calcular_soma_inversos_multiplos_de_quatro(int n, int x, int count);
int adicao_naturais(int n, int x, int i, int count);
int soma_dos_quadrados(int n, int x, int count);
double soma_dos_inversos(int n, double x, int count);
int fatorial(int n);


//Funções para exibir resultados
void resultado_soma_valores_multiplos_de_tres(int n);
void resultado_calcular_soma_inversos_multiplos_de_quatro(int n);
void resultado_adicao_naturais(int n);
void resultado_soma_dos_quadrados(int n);
void resultado_soma_dos_inversos(int n);

#endif