#include <stdio.h>
#include <string.h>

#define TAB_LENGTH 4
#define MAX_INPUT_LENGTH 1000

void replace_tabs(char input[]){
  int read, write;
  int len = strlen(input);

  for (read = 0, write = 0; read < len; read++) {
    if (input[read] == '\t') {
      int spaces = TAB_LENGTH - (write % TAB_LENGTH);
      for (int j = 0; j < spaces; j++) {
        input[write] = ' ';
        write++;
      }
    } else {
      if (read != write) {
        input[write] = input[read];
      }
      write++;
    }
  }
  input[write] = '\0';
}

int main() {
  char input[MAX_INPUT_LENGTH];

  while (fgets(input, MAX_INPUT_LENGTH, stdin) != NULL) {
    replace_tabs(input);
    printf("%s\n", input);

  }
  return 0;
}
