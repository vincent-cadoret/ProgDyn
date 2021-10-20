#include <stdio.h>
#include <stdlib.h>
#include "header/function.h"

#define ARRAY_MAX_SIZE 1000
#define ARRAY_VALUE_RESEARCHED 630

int main(void) {
    printf("Debut du TP4 : Programmation Dynamique by Vincent Cadoret\n");

    int *array = getArray(ARRAY_MAX_SIZE);

    /**
     * @authors Vincent Cadoret
     * @brief Test de la Dichotomie.
     */
    int result = find_by_dichotomy(array, ARRAY_MAX_SIZE, ARRAY_VALUE_RESEARCHED);
    printf("Position de la valeur : %d", result);

    /**
     * @authors Vincent Cadoret
     * @brief Test de la Dichotomie.
     */


    printf("\nFin du TP4 : Programmation Dynamique by Vincent Cadoret");
    return EXIT_SUCCESS;
}
