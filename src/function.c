#include <malloc.h>
#include "../header/function.h"

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

/**
 * @author Vincent Cadoret
 * @brief Trouve la position d'un nombre inclue dans un tableau via la méthode de la dychotomie.
 * @param size
 * @return tab
 */
int find_by_dichotomy(int array[], int size_t, int value) {
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

/**
 * @author Vincent Cadoret
 * @brief Tri un tableau passé en paramètre selon la méthode du sac à dos.
 * @param array
 * @param size
 * @return array
 */
void triSack(Sack array[], int size) {
    Sack temp;

    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1 ; j < size; j++) {
            if (array[i].value/array[i].weight <= array[j].value/array[j].weight) {
                temp.weight = array[i].weight;
                temp.value = array[i].value;
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

/**
 * @author Vincent Cadoret
 * @brief Rempli le sac à dos via un tableau passé en paramètre. Retourne un float du poids du sac.
 * @param array
 * @param size
 * @param weightMax
 * @return total
 */
float find_by_knapsack(Sack array[], int size, float weightMax){
    float total = 0;
    for (int i = 0; i < size; ++i) {
        if(array[i].weight <= weightMax){
            weightMax -= array[i].weight;
            total += array[i].value;
        }
    }
    return total;
}