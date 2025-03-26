#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potencia(int x, int y) {
    int res = 1;

    for(int i = 0; i < y; i++) {
        res = res * x;
    }

    return res;
}