#include <stdio.h>
#include "../utilities/utility_fns.h"

int main(void) {
  int size = 100;
  int squares[size];
  for (int i = 0; i < size; i++) {
    squares[i] = i * i;
  }
  print_array(squares, size);
  return 0;
}
