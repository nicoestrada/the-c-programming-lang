#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ASCII_TABLE 128

// create a lookup table to parse s2, then reference it for s1

int any(char s1[], char s2[]) {
  char lookup_table[ASCII_TABLE] = {0};
  int i;

  //first pass s2
  for (i = 0; s2[i] != '\0'; i++) {
    if ((unsigned char)s2[i]) {
      lookup_table[(unsigned char)s2[i]] = 1;
    }
  }

  //then compare to s1 and return index of first match
  for (i = 0; s1[i] != '\0'; i++) {
    if (lookup_table[(unsigned char)s1[i]] > 0) {
      return i;
    }
  }

  return -1;
}

int main() {
  char s1[] = "good morning to you";
  char s2[] = "nice to see you";

  int ans = any(s1, s2);

  printf("%d\n", ans);

  return 0;
}
