#include <stdio.h>

int main() 
{
  int c;
  int flag = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (!flag) {
        putchar(c);
        flag = 1;
      }
    } else {
      putchar(c);
      flag = 0;
    }
  }
  return 0;
}
