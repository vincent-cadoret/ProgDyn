#include "../header/knapsack.h"

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