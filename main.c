#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int *array = (int *)malloc(n * sizeof(int));
  printf("enter the elements:");
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
  printf("Enter the elements odd:\n");
  for (int i = 0; i < n; i++) {
    if (array[i] % 2 != 0) {
      printf("%d\n", array[i]);
    }
  }
  printf("Enter the elements even:\n");
  for (int i = 0; i < n; i++) {
    if (array[i] % 2 == 0) {
      printf("%d\n", array[i]);
    }
  }

  return 0;
}