#include <stdio.h>

int main(void) {
  double fibonacci[20];
  for (int i = 0; i < 20; i++) {
    if(i < 3) {
      fibonacci[i] = i;
    } else {
      fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    printf("golden ration at %i number is %f\n", i, fibonacci[i - 1] / fibonacci[i]);
  }

  return 0;
}
