#include <stdio.h>
#include <stdlib.h>

double average(int *arr, int size) {
  double sum = 0.0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum / size;
}

int main() {
  int size;
  int *numbers;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  numbers = (int *)malloc(size * sizeof(int));

  if (numbers == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &numbers[i]);
  }

  double avg = average(numbers, size);

  printf("Average: %.2f\n", avg);

  free(numbers);

  return 0;
}
