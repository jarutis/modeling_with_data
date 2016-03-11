#include <stdio.h>

int main(void){
  if (1 || 0 && 0) {
    printf ("Hello world.\n");
  } else {
    printf ("False alarm.\n");
  }
  return 0;
}
