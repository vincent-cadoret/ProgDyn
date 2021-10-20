#include <stdio.h>
#include <stdlib.h>
#include "header/function.h"

#define ARRAY_MAX_SIZE 1000
#define ARRAY_VALUE_RESEARCHED 630

int main(void) {
    printf("Debut du TP4 : Programmation Dynamique by Vincent Cadoret\n");
    printf("Exercice 1 : \n");

    int *array = getArray(ARRAY_MAX_SIZE);

    /**
     * @authors Vincent Cadoret
     * @brief Test de la Dichotomie.
     */
    int result = find_by_dichotomy(array, ARRAY_MAX_SIZE, ARRAY_VALUE_RESEARCHED);
    printf("Position de la valeur : %d", result);

    /**
     * @authors Vincent Cadoret
     * @brief Knapsack.
     */
    printf("\nExercice 2 : \n");

    Sack sackArray[5];
    Sack monItem1; monItem1.value = 3; monItem1.weight = 1;
    Sack monItem2; monItem2.value = 5; monItem2.weight = 4;
    Sack monItem3; monItem3.value = 2; monItem3.weight = 5;
    Sack monItem4; monItem4.value = 7; monItem4.weight = 9;
    Sack monItem5; monItem5.value = 6; monItem5.weight = 3;

    sackArray[0] = monItem1;
    sackArray[1] = monItem2;
    sackArray[2] = monItem3;
    sackArray[3] = monItem4;
    sackArray[4] = monItem5;

    printf("\nTableau non trier : \n");
    for (int i = 0; i < 5; ++i) { // Affichage tableau non trier.
        printf("%f\n", sackArray[i].value/sackArray[i].weight);
    }

    triSack(sackArray, 5);

    printf("\nTableau trier : \n");
    for (int i = 0; i < 5; ++i) {// Affichage tableau trier.
        printf("%f\n", sackArray[i].value/sackArray[i].weight);
    }

    printf("\nFin du TP4 : Programmation Dynamique by Vincent Cadoret");
    return EXIT_SUCCESS;
}
