#include <stdio.h>
#include <ctype.h>
#include <string.h>

void escape(char s[], char t[]) {
  int i, j;
  for (i = j = 0; s[i] != '\0'; i++) {
    switch(s[i]) {
      case '\n': 
        t[j++] = '\\';
        t[j++] = 'n';
        break;
      case '\t':
        t[j++] = '\\';
        t[j++] = 't';
        break;
      default:
        t[j++] = s[i];
        break;
    }
  }
  t[j] = '\0';
}


int main() {
  char s[] = "Hello\tWorld!\nThis is a test.\nIt has tabs\t and newlines.";
  char t[100];

  escape(s, t);
  printf("Original string:\n%s\n\n", s);
  printf("Escaped string:\n%s\n", t);
  
  return 0;
}
