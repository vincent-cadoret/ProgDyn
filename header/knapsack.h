#ifndef PROGDYN_KNAPSACK_H
#define PROGDYN_KNAPSACK_H
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

void triSack(Sack array[], int size);
float find_by_knapsack(Sack array[], int size, float weight);
#endif //PROGDYN_KNAPSACK_H
