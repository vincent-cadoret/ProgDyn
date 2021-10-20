//
// Created by v.cadoret on 20/10/2021.
//

#ifndef PROGRAMMATION_DYNAMIQUE_FUNCTION_H
#define PROGRAMMATION_DYNAMIQUE_FUNCTION_H

#define SACK_MAX_SIZE 100

typedef struct {
    float value;
    float weight;
} Sack;

#endif //PROGRAMMATION_DYNAMIQUE_FUNCTION_H


int *getArray(int size);
int find_by_dichotomy(int array[], int size_t, int value);
void triSack(Sack unTableau[], int uneTaille);
int find_by_knapsack(Sack *s);