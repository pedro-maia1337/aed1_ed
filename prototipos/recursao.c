#include <stdio.h>
#include <stdlib.h>

//somatorio variando de dois em dois 1 3 5 7 9 11 12 = 48

int somatorio(int n) {
    if(n <= 0) {
        return 0;
    }

    return n + somatorio(n - 2);
}

int potencia(int b, int n) {
    if(n == 0) {
        return 1;
    }

    return b * potencia(b, n - 1);
}

int gerar_valores_impares(int n){
    if(n % 2 == 0 ) return  n = n + 1;
    if(n == 0 ) return 0;
    return n;
}


// 1 2 3 4
// 1 3 3 5

int main(void) {


    printf("%d\n", somatorio(5));

    printf("%d\n", potencia(2, 5));

    for(int i = 1; i <= 5; i++){
        printf("%d ", gerar_valores_impares(i));
    }
    
    return 0;
}