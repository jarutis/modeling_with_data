#include <stdio.h>
#include <stdlib.h>
#include "../utilities/utility_fns.h"

int main(void) {
  int *first = malloc(sizeof(int));
  int *second = malloc(sizeof(int));

  *first = 4;
  *second = 5;

  printf("before %i <-> %i\n", *first, *second);
  swap(first, second);
  printf("after %i <-> %i\n", *first, *second);
  return 0;
}
