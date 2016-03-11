#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void add_a_prime(int addme, int *ct, int primes[]){
  primes[*ct] = addme;
  (*ct)++;
}

void extend_array(int *size, int **primes) {
  *size *= 2;
  *primes = realloc(*primes, sizeof(int) * (*size));
}

int main(){
  int ct =0, i, j, testme = 2, isprime, max = 1000, size = 1;
  int *primes = malloc(sizeof(int) * size);

  for (j = 0; j < max; j++) {
    isprime = 1;
    for (i = 0; isprime && i < sqrt(testme) && i < ct; i++) {
      isprime = testme % primes[i];
    }
    /* add prime */
    if (isprime) {
      if (ct == size) {
        extend_array(&size, &primes);
      }
      add_a_prime(testme, &ct, primes);
    }
    testme++;
  }
  for (i = 0; i < ct; i++) {
    printf("%i\t", primes[i]);
  }
  printf("\n");
}
