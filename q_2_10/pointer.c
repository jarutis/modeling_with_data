#include <stdio.h>
#include "../utilities/utility_fns.h"

int main(void) {
  int first = 4;
  int second = 5;

  printf("before %i <-> %i\n", first, second);
  swap(&first, &second);
  printf("after %i <-> %i\n", first, second);
  return 0;
}
