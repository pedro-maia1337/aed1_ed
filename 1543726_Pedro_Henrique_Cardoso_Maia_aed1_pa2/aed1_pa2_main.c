#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include "pair.h"
#include "io.h"
#include "myarray.h"
#include "mymatriz.h"

#define MAX 100

void cabecalho() {
    system("cls");
    print("----------------------------------------\n");
    print("1543726_Pedro_Henrique_Cardoso_Maia_ed08\n");
    print("-----------------------------------------\n");
    print("\n");
}

void method_pa01( void ) {
    /*
    Definir e testar um procedimento (01) para:
    - definir uma estrutura de dados para guardar um par de valores inteiros;
    - ler pares de valores reais de arquivo (DADOS_1.TXT);
    - parar quando houver um par for igual a (0,0), ou quando acabarem os dados no arquivo;
    - se um par corresponder às coordenadas de um ponto,
    - calcular a distância entre dois valores consecutivos e
    - gravar cada valor calculado no arquivo (SAIDA_1.TXT)
    Usar constantes reais (double) em expressões que envolvam valores reais (double).
    */

    /*ref_pairs pair = fread_pairs("DADOS.txt");

    print_pair(pair);
    
    pause("Aperte Enter para sair. ");*/
}

void method_pa02( void ) {
    /*
    ler o arquivo (SAIDA_1.TXT) gerado no exercício anterior e armazenar as distâncias em arranjo; 
    calcular a maior e a menor distância entre elas usando funções 
    que recebam o arranjo e seu tamanho como parâmetros.   
    Exemplo: { 5, 2.0, 1,0, 5.0, 4.0, 3.0  }
    */

    double maior_distancia = 0.0;
    double menor_distancia = 0.0;

    ref_double_array arranjo = fread_double_array("SAIDA.txt");

    print_double_array(arranjo);

    maior_distancia = calc_maior_distancia(arranjo);
    menor_distancia = calc_menor_distancia(arranjo);

    printf("Maior distancia = %0.2lf\n", maior_distancia);
    printf("Menor distancia = %0.2lf\n", menor_distancia);

    free_double_array(arranjo);

    pause("Aperte Enter para sair. ");
}

void method_pa03( void ) {
    /*
    Definir e testar um procedimento (03) para: 
    ler o arquivo (SAIDA_1.TXT) gerado no primeiro exercício e armazenar as distâncias em arranjo; 
    calcular a distância média usando uma função que receba o arranjo e seu tamanho como parâmetros. 
    A média deve ser calculada descartando a maior e a menor distância.
    */

    double media = 0.0;
    ref_double_array arranjo = fread_double_array("SAIDA.txt");
    print_double_array(arranjo);
    media = calc_media(arranjo);
    printf("\n");
    printf("A media dos valores descatando a maior e a menor distancia: %0.2lf", media);
    free_double_array(arranjo);
    pause("\nAperte Enter para sair. ");
}

void method_pa04( void ) {
     /*
     ler pares de valores reais de arquivo (DADOS_1.tXT) e 
       - armazenar cada primeiro valor em uma coluna de matriz e o segundo na coluna seguinte; 
       - comparar sucessivamente os valores na primeira coluna e 
       - trocar os conteúdos de linhas, até que a primeira coluna 
       - esteja ordenada de forma crescente. 
       - Se houver valores iguais, desempatar pelo segundo valor. 
 
    DICA: Usar mais de uma repetição para fazer os testes de linhas consecutivas mais de uma vez. 
    
    Exemplo: sequência = { (5,2), (2,3), (3,1), (5,1), (1,4), (0,0) }
    */

   ref_double_matriz matriz = fread_double_matriz("DADOS.txt");

   printDoubleMatriz(matriz);

   pause("\nAperte Enter para sair. ");
}

void method_pa05( void ){
    pause("\nAperte Enter para sair. ");
}


int main(int argc, char *argv[]) {
    int op;

    do {
        cabecalho();
        printf("1  - Procedimento PA01\n");
        printf("2  - Procedimento PA02\n");
        printf("3  - Procedimento PA03\n");
        printf("4  - Procedimento PA04\n");
        printf("5  - Procedimento PA05\n");

        printf("0 - Sair\n");

        printf("\n");

        printf("Escolha uma opcao: ");

        scanf("%d", &op);

        getchar();

        switch (op) {
            case 1:
                method_pa01(); break;
            case 2:
                method_pa02(); break;
            case 3:
                method_pa03(); break;
            case 4:
                method_pa04(); break;
            case 5:
                method_pa05(); break;
            case 0:
                printf("Pressione Enter para continuar...\n"); getchar();
                break;
            default:
                printf("%s", "Opcao invalida"); getchar();
                break;
        }

    } while(op != 0); 

    return 0;
}