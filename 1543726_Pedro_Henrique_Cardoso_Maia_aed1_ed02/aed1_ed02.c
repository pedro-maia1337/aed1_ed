#include "aed1_ed02.h"
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


//Função para verificação se o número é par ou impar
const char* par_ou_impar(int num) {
    return (num % 2 == 0) ? "par" : "impar";
}

//Função para verificação se o número é positivo ou negativo
const char* positivo_ou_negativo(int num) {
    if (num > 0) return "positivo";
    if (num < 0) return "negativo";
    return "zero"; 
}

const char* verifica_intervalo(double e, double d, double valorRecebido, char tipoIntervalo) {
    double maiorValor = 0.0;
    double menorValor = 0.0;

    if(e > d) {
        maiorValor = e;
        menorValor = d;
    }

    if(e < d) {
        maiorValor = d;
        menorValor = e;
    }

    printf("%lf\n", maiorValor);
    printf("%lf\n", menorValor);

    //0.75, 0.5, 1.8;

    //0.80 > 0.75;
    //0.5 < 1.8

    if(strcmp(tipoIntervalo, 'a')){
        if(valorRecebido > menorValor && valorRecebido < maiorValor){
            return "Pertence ao intervalo aberto";
        } else {
            return "Nao pertence ao intervalo aberto";
        }
    }

    if(strcmp(tipoIntervalo, 'f')) {
        if(valorRecebido >= menorValor && valorRecebido <= maiorValor){
            return "Pertence ao intervalo";
        } else {
            return "Nao pertence ao intervalo";
        }
    }
}

   
    