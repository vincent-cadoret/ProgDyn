#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include "../header/pgcb.h"

int *getMatrix(const int row, const int column){
    int size = row * column;
    int *matrix = malloc(size * sizeof(int));
    srand(time(NULL));

    for(int i = 0 ; i <  size - 1; i++) {
        matrix[i] = rand() % 2;
        // printf("%d", matrix[i]);
    }
    return matrix;
}
void seeMatrix(int *matrix, const int row, const int column){
    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < column ; j++){
            printf("%d  ", matrix[i*j]);
        }
        printf("\n");
    }
}