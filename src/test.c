#include <stdio.h>
#include "../header/test.h"
#include "../header/dichotomy.h"
#include "../header/knapsack.h"
#include "../header/pgcb.h"

/**
 * @author Vincent Cadoret
 * @brief Fonction de test de la Dychotomie, on prend un tableau de 'getArray' puis on l'envoi à la fonction 'find_by_dichotomy' qui nous renvoie la valeur trouvé dans le tableau.
 */
void testDychotomy(void){
    printf("Exercice 1 : ");

    int *array = getArray(ARRAY_MAX_SIZE);
    int result = find_by_dichotomy(array, ARRAY_MAX_SIZE, ARRAY_VALUE_RESEARCHED);

    #ifdef __linux__
        CU_ASSERT(result == 630);
    #endif
    printf("%d", result);
}

/**
 * @author Vincent Cadoret
 * @brief Fonction de test de la méthode dite du Sac à dos, on prend un tableau Sack qu'on envoi à la fonction 'triSack' puis 'find_by_knapsack' qui nous renvoie le poids du sac à dos avec la méthode par gloutonnage.
 */
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
    #ifdef __linux__
        CU_ASSERT(res == 7.000000);
    #endif
    printf("%f", res);
}

/**
 * @author Vincent Cadoret
 * @brief Fonction de test pour trouver le plus grand carré blanc (PGCB) dans une matrice de '1' et de '0' généré aléatoirement.
 */
void testPGCB(void){
    printf("\nExercice 3 : \n");
    seeMatrix(getMatrix(ROW, COLUMN), ROW, COLUMN);
}