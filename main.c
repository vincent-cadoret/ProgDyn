#include <stdio.h>
#include <stdlib.h>
#include "header/function.h"

#define ARRAY_MAX_SIZE 1000
#define ARRAY_VALUE_RESEARCHED 630

int main(void) {
    printf("Debut du TP4 : Programmation Dynamique by Vincent Cadoret\n\n");
    printf("Exercice 1 : \n");

    int *array = getArray(ARRAY_MAX_SIZE);
    int result = find_by_dichotomy(array, ARRAY_MAX_SIZE, ARRAY_VALUE_RESEARCHED);
    printf("Position de la valeur : %d", result);

    printf("\n\nExercice 2 : \n");

    Sack sackArray[3];
    Sack m1; m1.value = 7; m1.weight = 6;
    Sack m2; m2.value = 5; m2.weight = 5;
    Sack m3; m3.value = 5; m3.weight = 5;

    sackArray[0] = m1;
    sackArray[1] = m2;
    sackArray[2] = m3;

    printf("\nTableau non trier : \n");
    for (int i = 0; i < 3; ++i) { // Affichage tableau non trier.
        printf("%f\n", sackArray[i].value/sackArray[i].weight);
    }

    triSack(sackArray, 3);

    printf("\nTableau trier : \n");
    for (int i = 0; i < 3; ++i) { // Affichage tableau trier.
        printf("%f\n", sackArray[i].value/sackArray[i].weight);
    }

    float res = find_by_knapsack(sackArray, 3, 10);
    printf("\nPoids total du sac : %f\n", res);

    printf("\nFin du TP4 : Programmation Dynamique by Vincent Cadoret");
    return EXIT_SUCCESS;
}
