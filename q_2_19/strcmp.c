#include <stdio.h>
#include <string.h>

int is_equal_str(char *str1, char *str2);

int main(void) {
  char word[] = "one";
  char same_word[] = "one";
  char other_word[] = "one1";
  if(is_equal_str(word, same_word)) printf("%s\n", "all_fine");
  if(!is_equal_str(word, other_word)) printf("%s\n", "fine_some_more");
  return 0;
}

int is_equal_str(char *str1, char *str2) {
  if(strcmp(str1, str2) == 0) {
    return 1;
  } else {
    return 0;
  }
}
