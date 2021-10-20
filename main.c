#include <stdio.h>
#include <stdlib.h>
#include "header/function.h"

#define ARRAY_MAX_SIZE 1000
#define ARRAY_VALUE_RESEARCHED 630

int main(void) {
    printf("Debut du TP4 : Programmation Dynamique by Vincent Cadoret\n");
    printf("Exercice 1 : ");

    int *array = getArray(ARRAY_MAX_SIZE);
    int result = find_by_dichotomy(array, ARRAY_MAX_SIZE, ARRAY_VALUE_RESEARCHED);
    printf("%d", result);

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

    printf("\nFin du TP4 : Programmation Dynamique by Vincent Cadoret");
    return EXIT_SUCCESS;
}
