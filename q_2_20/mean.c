#include <stdio.h>
#include <assert.h>

double find_mean(double in[], int length);
double find_mean_trivial(double *in, int length);

int main(void) {
  double set[] = {1.0, 3.0, 5.0, 7.0, 9.0};
  printf("trivial mean: %f\n", find_mean_trivial(set, 5));
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

double find_mean_trivial(double *in, int length) {
  assert (in != NULL);
  assert (length > 0);
  double mean = in[0];
  for (int i = 1; i < length; i++) mean += in[i];
  return mean/length;
}
