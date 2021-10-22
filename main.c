#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header/test.h"
#include "header/pgcb.h"

#define ROW 10
#define COLUMN 10

int main(void) {
    printf("Debut ProgDyn Vincent Cadoret\n");

    testDychotomy();
    testKnapsack();

    printf("\n\n");

    seeMatrix(getMatrix(ROW, COLUMN), ROW, COLUMN);

    printf("\nFin ProgDyn Vincent Cadoret");
    return EXIT_SUCCESS;
}
