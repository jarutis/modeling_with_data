#include <stdio.h>

int triangular(int i);
int find_next_triangular(int i);
void find_triplet(int in, int out[]);

int main(void) {
  int triplets[3];
  for (int i = 1; i < 100; i++) {
    find_triplet(i, triplets);
    printf("%i has triplets (%i, %i, %i)\n", i, triplets[0], triplets[1], triplets[2]);
  }
  return 0;
}

int triangular(int i) {
  int ith_triangular = 0;
  for (int j = 1; j < i; j++) {
    ith_triangular += j;
  }
  return ith_triangular;
}

int find_next_triangular(int i) {
  int next_triangular_index = 0;
  while(triangular(next_triangular_index) <= i) {
    next_triangular_index++;
  }
  return next_triangular_index;
}

void find_triplet(int in, int out[]) {
  int max_index = find_next_triangular(in);
  for (int i = 0; i < max_index; i++) {
    for (int j = 0; j < max_index; j++) {
      for (int k = 0; k < max_index; k++) {
        if (triangular(i) + triangular(j) + triangular(k) == in) {
          out[0] = triangular(i);
          out[1] = triangular(j);
          out[2] = triangular(k);
          return;
        }
      }
    }
  }
}
