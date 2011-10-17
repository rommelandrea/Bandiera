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
void swap(int [], int, int);

void riempiArrayCasuale(int a[], int length, int max){
    srand(time(NULL));
    int i;
    
    for(i=0; i<length; i++)
        a[i] = rand()%max;
}

int ordinatoColori(int a[], int length){
    int i;
    
    for(i=1; i<length; i++){
        if(a[i-1] > a[i])
            return 0;
    }
    return 0;
}

void ordinaColori(int a[], int length){
    int i, j, k;
    
    i = j = 0;
    k = length-1;
    
    while(j<=k){
        if(a[j]%3==0){
            swap(a, i, j);
            i++;
            j++;
        }
        if(a[j]%3==1 && j<=k){
            j++;
        }
        if(a[j]%3==2 && j<=k){
            swap(a, j, k);
            k--;
        }
    }
}

void swap(int a[], int i, int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void print(int a[], int length){
    int i;
    printf("stampo l'array\n");
    for(i=0; i<length; i++){
        printf("%d-->", a[i]);
    }
    printf("\n");
}

int main(int argc, char** argv) {
    int length = 10;
    int max = 3;
    int boolan;
    
    int a[length];
    
    riempiArrayCasuale(a, length, max);
    
    print(a, length);
    
    ordinaColori(a, length);
    
    print(a, length);
    
    return (EXIT_SUCCESS);
}

