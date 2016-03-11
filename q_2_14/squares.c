#include <stdlib.h>
#include <stdio.h>
#include "../utilities/utility_fns.h"

int main(){
  int array_length=100;
  int *squares = malloc (array_length * sizeof(int));
  for (int i=0; i < array_length; i++)
    squares[i] = i * i;

  swap(&squares[7], &squares[8]);
  print_array(squares, array_length);
}
