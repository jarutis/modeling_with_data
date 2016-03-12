#include <stdio.h>
#include <assert.h>
#include <math.h>

double find_mean(double in[], int length);
double find_mean_trivial(double *in, int length);
void test_find_mean();

int main(void) {
  test_find_mean();
  double set[] = {1, 3, 5, 7, 9};
  printf("better mean: %f\n", find_mean(set, 5));
  return 0;
}

double find_mean(double in[], int length) {
  assert (in != NULL);
  assert (length > 0);
  double mean = in[0];
  for (int i = 1; i < length; i++) {
    mean = (i * mean) / (i + 1) + in[i] / (i + 1);
  }
  return mean;
}

void test_find_mean() {
  double array1[] = {1,2,3,4};
  int length = 4;
  assert(find_mean(array1, length) == 2.5);
  double array2[] = {INFINITY,2,3,4};
  assert(find_mean(array2, length) == INFINITY);
  double array3[] = {-9,2,3,4};
  assert(find_mean(array3, length) == 0);
  double array4[] = {2.26};
  assert(find_mean(array4, 1) == 2.26);
}
