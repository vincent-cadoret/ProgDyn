#include <malloc.h>
#include <stdio.h>
#include "../header/test.h"
#include "../header/dichotomy.h"
#include "../header/knapsack.h"

/**
 * @author Vincent Cadoret
 * @brief Génère un tableau avec une taille passé en paramètre.
 * @param size
 * @return tab
 */
int *getArray(int size) {
    int *tab = (int*) malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        tab[i] = i;
    }
    return tab;
}

void testDychotomy(void){
    printf("Exercice 1 : ");

    int *array = getArray(ARRAY_MAX_SIZE);
    int result = find_by_dichotomy(array, ARRAY_MAX_SIZE, ARRAY_VALUE_RESEARCHED);
    printf("%d", result);
}
void testKnapsack(void){
    printf("\nExercice 2 : ");

    Sack sackArray[3];
    Sack m1; m1.value = 7; m1.weight = 6;
    Sack m2; m2.value = 5; m2.weight = 5;
    Sack m3; m3.value = 5; m3.weight = 5;

    sackArray[0] = m1;
    sackArray[1] = m2;
    sackArray[2] = m3;

    triSack(sackArray, 3);

    float res = find_by_knapsack(sackArray, 3, 10);
    printf("%f", res);
}