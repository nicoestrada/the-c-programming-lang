#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LINE_LEN 1000
#define MAX_WORD_LEN 20

int main() {
    char line_input[MAX_LINE_LEN];
    int word_in_line[MAX_WORD_LEN + 1] = {0};  // +1 to include words of length MAX_WORD_LEN
    int word_length = 0;

    while (fgets(line_input, MAX_LINE_LEN, stdin) != NULL) {
        int line_length = strlen(line_input);

        if (line_length >= 80) {
            for (int i = 0; i < line_length; i++) {
              if (isspace(line_input[i])) {  // Changed 'line' to 'line_input'
                  if (word_length > 0) {
                      if (word_length > MAX_WORD_LEN) {
                          word_length = MAX_WORD_LEN;
                      }
                      word_in_line[word_length]++;
                      word_length = 0;
                  }
              } else {
                  word_length++;
              }
          }

          // Print each line and line_length
          printf("%d\n", line_length);  // Changed 'line' to 'line_length'
          printf("%s", line_input);  // Changed 'line_length' to 'line_input'
        }
    }

    return 0;
}

