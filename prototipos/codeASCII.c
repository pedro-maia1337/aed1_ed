#include <stdio.h>
#include <stdlib.h>

int c_char_para_inteiro(char c) {
    int y = 0;
    y = (int) c;
    return y;
}

char c_inteiro_para_char(int i){
    char y = '0';
    y = (char) i;
    return y;
}


int main (void) {
    char c = 'A';
    int i = 65;
    printf("%s %d \n", "A = ", c_char_para_inteiro(c));
    printf("65 = %c\n", c_inteiro_para_char(i));
    return 0;
}