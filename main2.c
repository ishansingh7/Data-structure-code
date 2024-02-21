#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  int odd_sum = 0;
  int even_sum = 0;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int *array = (int *)malloc(n * sizeof(int));
  printf("Enter the elements of the array:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    if (array[i] % 2 == 0) {
      even_sum += array[i];s
    } else {
      odd_sum += array[i];
    }
  }
  printf("the sum of even numbers is: %d\n", even_sum);
  printf("the sum of odd numbers is: %d\n", odd_sum);

  return 0;
}