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
void seeMatrix(const int *matrix, const int row, const int column){
    int k = 0;
    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < column ; j++){
            // printf("%d  ", matrix[k]);
            // printf("%d", PGCB(matrix[i], matrix[j]));
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

/**
 * @author Vincent Cadoret
 * @brief Renvoie le plus grand entier parmis les 3.
 * @param a
 * @param b
 * @param c
 * @return tmp
 */
int max(int a, int b, int c){
    int tmp = 0;
    if(a >= b && a >= c){
        tmp = a;
    }
    if(b >= a && b >= c){
        tmp = b;
    }
    if(c >= a && c >= b){
        tmp = c;
    }
    return tmp;
}

/**
 * @author Vincent Cadoret
 * @brief Renvoie le plus petit entier parmi les 3.
 * @param a
 * @param b
 * @param c
 * @return tmp
 */
int min(int a, int b, int c){
    int tmp = 0;
    if(a <= b && a <= c){
        tmp = a;
    }
    if(b <= a && b <= c){
        tmp = b;
    }
    if(c <= a && c <= b){
        tmp = c;
    }
    return tmp;
}

/**
 * @author Vincent Cadoret
 * @brief Renvoie 0 si la position X/Y est égal à 0, 1 si la position X/Y est égal à 1 ou mémoïse la position pour pouvoir ensuite chercher autour de cette valeur dans la matrice.
 * @param x
 * @param y
 * @return int
 */
int PGCB(const int x, const int y){ //TODO
    int i = 0;
    int *memory = malloc((x * y) * sizeof(int));
    if(x == 0 && y == 0) {
        return 0;
    }
    if(x == 1 && y == 1) {
        return 1;
    } else {
        return memory[i++] = 1 + min(PGCB(x-1,y-1), PGCB(x,y-1), PGCB(x-1,y));
    }
}