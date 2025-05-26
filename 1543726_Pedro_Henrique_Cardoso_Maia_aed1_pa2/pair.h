#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define MAX 100

typedef struct Pairs {
    double x;
    double y;
} Pairs;

typedef Pairs *ref_pairs;

ref_pairs new_pairs(double x, double y) {
    ref_pairs tpmPairs = (ref_pairs) malloc(sizeof(Pairs));

    tpmPairs->x = 0;
    tpmPairs->y = 0;

    if(tpmPairs == NULL) {
        printf("Nao foi possivel alocar memoria");
    } else {
        tpmPairs->x = x;
        tpmPairs->y = y;
    }

    return tpmPairs;
}

void free_pairs(ref_pairs tpmPairs) {
    if(tpmPairs != NULL) {
        free(tpmPairs);
    }
}

void print_pair(ref_pairs tpmPairs) {
    printf("(%0.2lf, %0.2lf)\n", tpmPairs->x, tpmPairs->y);
}

void fwrite_pairs(char *filename, ref_pairs pairs){
    FILE *file = fopen(filename, "a+");

    if(file == NULL){
        printf("Nao foi possivel abrir o arquivo. \n");
    } else {
        fprintf(file, "%0.2lf ", pairs->x);
        fprintf(file, "%0.2lf\n", pairs->y);
    }

    fclose(file);
}

ref_pairs fread_pairs(char *filename){
    ref_pairs pair = new_pairs(0.00, 0.00);
    
    FILE *file = fopen(filename, "rt");

    if(file == NULL) {
        printf("Nao foi possivel abrir o arquivo. ");
    } else {
        while((pair->x != 0 && pair->y != 0 ) || !feof(file)) { //parar também quando os pares assumirem (0, 0)
            fscanf(file, "%lf", &pair->x);
            fscanf(file, "%lf", &pair->y);
        }
    }

    return pair;
}

/*void fwrite_distance(char *filename){
    FILE *read_file = fopen(filename, "rt");

    FILE *write_file = fopen("SAIDA.txt", "wt");

    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
}*/
