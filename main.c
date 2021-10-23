#include <stdio.h>
#include <stdlib.h>
#include "header/test.h"

int main(void) {
    printf("Debut ProgDyn Vincent Cadoret\n");

    testDychotomy();
    testKnapsack();
    testPGCB();

    printf("\nFin ProgDyn Vincent Cadoret\n");
    return EXIT_SUCCESS;
}
