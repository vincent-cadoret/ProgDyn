//
// Created by v.cadoret on 20/10/2021.
//

#include <stdio.h>
#include <malloc.h>
#include "../header/function.h"

int *getArray(int size) {
    int *tab = (int*) malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        tab[i] = i;
    }
    return tab;
}

int find_by_dichotomy(int array[], int size_t, int value){
    int min = 1, max = size_t, i, result = -1;

    while (min <= max) {
        i = (min + max) / 2;
        if (array[i] == value) {
            result = array[i];
            break;
        }
        if (array[i] < value) {
            min = i;
        }
        if (array[i] > value) {
            max = i;
        }
    }
    return result;
}
int find_by_knapsack(int array[], int size_t, int value){

    return 0;
}