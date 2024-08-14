#include <stdio.h>
#include <ctype.h>
#include <string.h>

// i really like this approach to solving char lookups and operations

// write an alternative version of squeeze(s1,s2) that deletes each character
// in s1 that matches any character in the string s2

#define ASCII_TABLE 128

void squeeze_alternative(char s1[], char s2[]) {
  int table[ASCII_TABLE] = {0};
  int i, j;

  for (i = 0; s2[i] != '\0'; i++) {
    table[(unsigned char)s2[i]] = 1;
  }

  //now there is a table with vals > 0 

  for (i = j = 0; s1[i] != '\0'; i++) {
    if (!table[(unsigned char)s1[i]]) {
      s1[j++] = s1[i];
    }
  }
  s1[j] = '\0';
}

// test the function by putting here and calling it in main
int main() {
  char s1[] = "hello world";
  char s2[] = "world";

  squeeze_alternative(s1, s2);

  printf("%s\n", s1);
  return 0;
}
