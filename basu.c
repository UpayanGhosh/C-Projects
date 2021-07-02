#include <stdio.h>
int main() {
  int arr[100][100], brr[100][100], sum[100][100], i, j;
 printf("elements of 1st matrix:");
  for (i = 0; i < 2; i++)
    for (j = 0; j < 2; j++)
	{
     scanf("%d ", &arr[i][j]);
    }

  printf("elements of 2nd matrix:");
  for (i = 0; i < 2; i++)
    for (j = 0; j < 2;j++)
 {
     scanf("%d ", &brr[i][j]);
    }
for (i = 0; i < 2; i++)
    for (j = 0; j < 2; j++) {
      sum[i][j] = arr[i][j] + brr[i][j];
    }
  for (i = 0; i < 2; i++){
    for (j = 0; j < 2; j++) {
      printf("%d  ", sum[i][j]);
    }
    printf("\n");
    }
return 0;
}