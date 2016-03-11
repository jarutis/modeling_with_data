#include <stdio.h>

int main(void) {
  int size = 100;
  int squares[size];
  for (int i = 0; i < size; i++) {
    squares[i] = i * i;
    printf("%i squared is %i\n", i, squares[i]);
  }
  return 0;
}
