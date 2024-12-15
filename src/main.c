#include "../include/main.h"
#include <stdio.h>

int is_valid_grid(int (*grid)[40], int dim) {
  int isValid = 0;
  int i = 0;
  int j = 0;

  while (i < dim && isValid == 0) {
    while (j < dim && isValid == 0) {
      if (grid[i][j] > 0) {
        isValid = 1;
      }
      j++;
    }
    i++;
  }

  return isValid;
}

void print_grid(int grid[][DIM], int dim) {
  for (int i = 0; i < dim; i++) {
    for (int j = 0; j < dim; j++) {
      printf("%d ", grid[i][j]);
    }
    printf("\n");
  }
}

int main(void) {
  int grid[DIM][DIM];
  int next[DIM][DIM];

  for (int i = 0; i < DIM; i++) {
    for (int j = 0; j < DIM; j++) {
      grid[i][j] = 0;
      next[i][j] = 0;
    }
  }

  print_grid(grid, DIM);

  return 0;
}
