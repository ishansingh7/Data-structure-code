#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int *arr = (int *)malloc(n * sizeof(int));
  if (arr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("Enter %d elements:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int odd_result = 1;
  int even_result = 1;
  for (i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      even_result *= arr[i];
    } else {
      odd_result *= arr[i];
    }
  }

  printf("Multiplication of odd elements in the array: %d\n", odd_result);
  printf("Multiplication of even elements in the array: %d\n", even_result);

  free(arr);

  return 0;
}
