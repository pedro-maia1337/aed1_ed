#include "aed1_ed02.h"
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


//função para verificar se o número é par ou ímpar
const char* par_ou_impar(int num) {
    return (num % 2 == 0) ? "par" : "impar";
}

//função para verificar se o número é positivo ou negativo
const char* positivo_ou_negativo(int num) {
    if (num > 0) return "positivo";
    if (num < 0) return "negativo";
    return "zero"; 
}
