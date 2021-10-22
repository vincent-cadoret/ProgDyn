#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include "../header/pgcb.h"

/**
 * @author Vincent Cadoret
 * @brief Crée un tableau 1D pour la matrice.
 * @param row
 * @param column
 * @return int *
 */
int *getMatrix(const int row, const int column){
    int size = row * column;
    int *matrix = malloc(size * sizeof(int));
    srand(time(NULL));

    for(int i = 0 ; i <  size - 1; i++) {
        matrix[i] = rand() % 2;
    }
    return matrix;
}

/**
 * @author Vincent Cadoret
 * @brief Affiche la matrice dans le bon format.
 * @param matrix
 * @param row
 * @param column
 */
void seeMatrix(int *matrix, const int row, const int column){
    int k = 0;
    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < column ; j++){
            // printf("%d  ", matrix[k]);
            if(matrix[k] == 0){
                printf("   ");
            }
            if(matrix[k] == 1){
                printf(" * ");
            }
            k++;
        }
        printf("\n");
    }
}