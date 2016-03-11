#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void astrcpy(char **base, char *copyme) {
  *base = realloc(*base, strlen(copyme));
  strcpy(*base, copyme);
}

void astrcat(char **base, char *copyme) {
  int new_length = strlen(*base) + strlen(copyme);
  *base = realloc(*base, new_length);
  strcat(*base, copyme);
}

int main(void) {
  char *container = NULL;
  char text[] = "Once upon a time in a dark night something happened";
  char other_text[] = " and happened some more";
  astrcpy(&container, text);
  printf("Copied: %s\n", container);
  astrcat(&container, other_text);
  printf("Concatenated: %s\n", container);
  return 0;
}
