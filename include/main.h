#ifndef MAIN_H
#define MAIN_H

/**
 * @program Conway's game of life.
 *
 * SETUP:
 * An infinite, two-dimensional orthogonal grid of square cells, each of
 * which is in one of two possible states: LIVE or DEAD. Since computers have
 * finite memory, we'll just be using a 100x100 grid for now.
 *
 * RULES:
 *
 * 1. Any LIVE cell with fewer than two LIVE neighbours dies.
 * 2. Any LIVE cell with two or three lives on to the next generation.
 * 3. Any LIVE cell with more than three neighbours dies.
 * 4. Any DEAD cell with exactly three live neighbours becomes a LIVE cell.
 *
 */

#define DIM 40

/*
 * @params:
 * @returns:
 */
int count_neighbours(int grid[][DIM], int i, int j, int dim);

/*
* @params:
* @returns: 0 or 1
*/
int is_valid_grid(int grid[][DIM], int dim);

/*
* @params:
* @returns: VOID
*/
void print_grid(int grid[][DIM], int dim);

int main(void);

#endif // ifndef MAIN_H
