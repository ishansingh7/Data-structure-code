#include <stdio.h>
#include <stdlib.h>

int main() {
  int size, element, *arr, index = -1;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  arr = (int *)malloc(size * sizeof(int));

  if (arr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the element to search: ");
  scanf("%d", &element);

  for (int i = 0; i < size; i++) {
    if (arr[i] == element) {
      index = i;
      break;
    }
  }

  if (index != -1) {
    printf("Element found at index: %d\n", index);
  } else {
    printf("Element not found in the array\n");
  }

  free(arr);

  return 0;
}
