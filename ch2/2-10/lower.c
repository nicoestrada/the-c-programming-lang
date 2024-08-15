#include <stdio.h>
#include <string.h>
#include <ctype.h>

//converts upper case to lower case, with a ternary expression
// upper case are 32 less than lower case counterparts in ASCII

void lower(char s[]) {
  int i = 0;
  while (s[i] != '\0') {
    s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] + 32 : s[i];
    i++;
  }
}

int main() {
  char s[] = "GOOD MORNING WORLD!";
  printf("%s\n", s);
  lower(s);
  printf("%s\n", s);

  return 0;
}


