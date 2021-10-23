#ifndef PROGDYN_PGCB_H
#define PROGDYN_PGCB_H

int *getMatrix(int row, int column);
void seeMatrix(const int *matrix, int x_size, int y_size);
int min(int a, int b, int c);
int max(int a, int b, int c);
int PGCB(int x, int y);

#endif //PROGDYN_PGCB_H
