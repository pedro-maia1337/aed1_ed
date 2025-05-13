#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

srand(time(NULL));

int RandomIntGenerate ( int inferior, int superior ) { 

    int random = 0;

    random = inferior + (rand() % (superior - inferior + 1));

    return random;
}




