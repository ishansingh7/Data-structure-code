#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  int sum1 = 0, sum2 = 0;
  printf("Enter the size  of elements in the array: ");
  scanf("%d", &n);
  int *array = (int *)malloc(n * sizeof(int));
  printf("Enter the elements of the array:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    sum1 += array[i];
  }

  printf("Enter the elemets of the array\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    sum2 += array[i];
  }
  printf("the sum of first array is %d\n", sum1);
  printf("the sum of second array is %d\n", sum2);
  return 0;
}