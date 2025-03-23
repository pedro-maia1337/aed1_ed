#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 100

int verificar_maiuscula(char c) {
    if(c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }  
}

int contar_string(char *str){
    int count = 0;

    for(int i = 0; i < strlen(str); i++) {
        if(verificar_maiuscula(str[i]) == 0 && str[i] >= 'c' && str[i] <= 'p') {
            count ++;
        }
    }

    return count;
}

char* concatenar_string(char *str) {
    static char str2[MAX] = "";
    str2[0] = '\0';  // Reseta a string para uma string vazia

    for(int i = 0; i < strlen(str); i++) {
        if(verificar_maiuscula(str[i]) == 0 && str[i] >= 'c' && str[i] <= 'p') {
            char temp[2] = {str[i], '\0'};
            strcat(str2, temp);
        }
    }

    return str2;
}

int contar_string_maiuscula_minuscula(char *str){ 
    int count = 0;

    for(int i = 0; i < strlen(str); i++) {
        if(((verificar_maiuscula(str[i]) == 1) || (verificar_maiuscula(str[i]) == 0)) && ((str[i] >= 'c' && str[i] <= 'p') || (str[i] >= 'C' && str[i] <= 'P'))) {
            count ++;
        }
    }

    return count;
}

char* concatenar_string_maiuscula_minuscula(char *str) {
    static char str2[MAX] = "";
    str2[0] = '\0';  // Reseta a string para uma string vazia

    for(int i = 0; i < strlen(str); i++) {
        if(((verificar_maiuscula(str[i]) == 1) || (verificar_maiuscula(str[i]) == 0)) && ((str[i] >= 'c' && str[i] <= 'p') || (str[i] >= 'C' && str[i] <= 'P'))) {
            char temp[2] = {str[i], '\0'};
            strcat(str2, temp);
        }
    }

    return str2;
}

int contar_par(char *str){
    int count = 0;

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] >= '0' && str[i] <= '9' && (int)str[i] % 2 == 0) {
            count ++;
        }
    }

    return count;
}


char* concatenar_string_nao_alfanumerica(char *str) {
    static char str2[MAX] = "";
    str2[0] = '\0';  // Reseta a string para uma string vazia

    for(int i = 0; i < strlen(str); i++) {
        if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) && !((str[i] >= '0' && str[i] <= '9'))) {
            char temp[2] = {str[i], '\0'};
            strcat(str2, temp);
        }
    }

    return str2;
}

char* concatenar_string_alfanumerica(char *str) {
    static char str2[MAX] = "";
    str2[0] = '\0';  // Reseta a string para uma string vazia

    for(int i = 0; i < strlen(str); i++) {
        if(((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) || ((str[i] >= '0' && str[i] <= '9'))) {
            char temp[2] = {str[i], '\0'};
            strcat(str2, temp);
        }
    }

    return str2;
}

int contar_string_alfanumerica(char *str) {
    int count = 0;

    for(int i = 0; i < strlen(str); i++) {
        if(((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) || ((str[i] >= '0' && str[i] <= '9'))) {
            count++;
        }
    }

    return count;
}