#include <stdio.h>

void print_array(int in_array[], int array_size) {
  for (int i = 0; i < array_size; i++) {
    printf("element at %i = %i\n", i, in_array[i]);
  }
}

void swap(int *first, int *second) {
  int tmp = *first;
  *first = *second;
  *second = tmp;
}
