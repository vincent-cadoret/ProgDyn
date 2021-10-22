#include "../header/dichotomy.h"

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