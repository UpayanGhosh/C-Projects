#include <stdio.h>
int main() {
  int r=2, c=2, a[100][100], b[100][100], sum[100][100], i, j;
  
  printf("\nelement of first matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("element of second matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
      sum[i][j] = a[i][j] + b[i][j];
    }

    for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
}
