#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>



int RandomIntGenerate ( int inferior, int superior ) { 
    int random = 0;

    srand(time(NULL));

    random = inferior + (rand() % (superior - inferior + 1));

    return random;
}


/*int *readArrayFromFile( char *str ) {
    int n = 0;
    int dados = 0;
    
    FILE *arquivo = fopen(str, "rt");

    if(arquivo == NULL) {
        printf("Nao possivel abrir o arquivo: "); getchar();
        return 0;
    }

    fscanf(arquivo, "%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        arr[i] = fscanf(arquivo, "%d", &dados);
    }

    return arr; 
} */

/*bool arraySearch( int valor, int *arr) {

}*/



