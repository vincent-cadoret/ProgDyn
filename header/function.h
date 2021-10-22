#ifndef PROGRAMMATION_DYNAMIQUE_FUNCTION_H
#define PROGRAMMATION_DYNAMIQUE_FUNCTION_H

/**
 * @author Vincent Cadoret
 * @brief Generation d'une structure pour les Sack.
 * @param value
 * @param weight
 */
typedef struct {
    float value;
    float weight;
} Sack;

/**
 * @author Vincent Cadoret
 * @brief Génére une Structure pour le PGCB.
 * @param x
 * @param y
 */
typedef struct {
    float x;
    float y;
} Square;

int *getArray(int size);
int find_by_dichotomy(int array[], int size_t, int value);
void triSack(Sack array[], int size);
float find_by_knapsack(Sack array[], int size, float weight);

#endif //PROGRAMMATION_DYNAMIQUE_FUNCTION_H