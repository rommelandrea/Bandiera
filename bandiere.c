/* 
 * File:   bandiere.c
 * Author: Andrea Romanello
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * prototipi di funzioni
 */
int ordinatoColori(int [], int);
void ordinaColori(int [], int);
void riempiArrayCasuale(int [], int, int);

void riempiArrayCasuale(int a[], int length, int max){
    srand(time(NULL));
    int i;
    
    for(i=0; i<length; i++)
        a[i] = rand()%max;
}

int main(int argc, char** argv) {
    
    return (EXIT_SUCCESS);
}

