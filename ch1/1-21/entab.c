#include <stdio.h>
#include <string.h>

#define TAB_LENGTH 4
#define MAX_INPUT_LENGTH 1000

void replace_spaces_with_tabs(char input[]) {
  int read, write;
  int len = strlen(input);
  int space_count = 0;
  for (read = 0, write = 0; read < len; read++) {
    if (input[read] == ' ') {
      space_count++;
      //then we count to see if its a tab
      if ((write + space_count) % TAB_LENGTH == 0) {
        input[write++] == '\t';
        space_count = 0;
      }
    } else {
      // else its not a tab, just add the space accordingly
      while (space_count > 0) {
        input[write++] = ' ';
        space_count--;
      }
      input[write++] = input[read];
    }
  }
  // write the trailing spaces
  while (space_count > 0) {
    input[write++] = input[read];
    space_count--;
  }

  //finish off the input, by null terminating it
  input[write++] = '\0';

}

int main() {
  char input[MAX_INPUT_LENGTH];

  while (fgets(input, MAX_INPUT_LENGTH, stdin) != NULL) {
    replace_spaces_with_tabs(input);
    printf("%s", input);
  }

  return 0;
}
