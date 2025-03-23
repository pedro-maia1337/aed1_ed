#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 100

int countString(char *str){
    int count = 0;

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z' && str[i] >= 'c' && str[i] <= 'p') {
            count ++;
        }
    }

    return count;
}

char* concatString(char *str) {
    static char str2[MAX] = "";

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z' && str[i] >= 'c' && str[i] <= 'p') {
            char temp[2] = {str[i], '\0'};
            strcat(str2, temp);
        }
    }

    return str2;
}

int countStringM(char *str){
    int count = 0;

    for(int i = 0; i < strlen(str); i++) {
        if(((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) && ((str[i] >= 'c' && str[i] <= 'p') || (str[i] >= 'C' && str[i] <= 'P'))) {
            count ++;
        }
    }

    return count;
}

char* concatStringM(char *str) {
    static char str2[MAX] = "";

    for(int i = 0; i < strlen(str); i++) {
        if(((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) && ((str[i] >= 'c' && str[i] <= 'p') || (str[i] >= 'C' && str[i] <= 'P'))) {
            char temp[2] = {str[i], '\0'};
            strcat(str2, temp);
        }
    }

    return str2;
}

int countPar(char *str){
    int count = 0;

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] >= '0' && str[i] <= '9' && (int)str[i] % 2 == 0) {
            count ++;
        }
    }

    return count;
}


char* concatStringNotAlfa(char *str) {
    static char str2[MAX] = "";

    for(int i = 0; i < strlen(str); i++) {
        if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) && !((str[i] >= '0' && str[i] <= '9'))) {
            char temp[2] = {str[i], '\0'};
            strcat(str2, temp);
        }
    }

    return str2;
}

char* concatStringAlfa(char *str) {
    static char str2[MAX] = "";

    for(int i = 0; i < strlen(str); i++) {
        if(((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) || ((str[i] >= '0' && str[i] <= '9'))) {
            char temp[2] = {str[i], '\0'};
            strcat(str2, temp);
        }
    }

    return str2;
}