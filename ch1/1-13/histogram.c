#include <stdio.h>
#include <ctype.h>

// keys to note are punctiation marks and hyphens, acronyms!

#define MAX_WORD_LENGTH 10

int main() {
  int word_lengths[MAX_WORD_LENGTH + 1] = {0};
  int c, wlength = 0;

  // count word lengths here
  while ((c = getchar()) != EOF) {
    if (isspace(c)) {
      // check if length is greater than max first
      if (wlength > 0) {
        if (wlength > MAX_WORD_LENGTH) {
          wlength = MAX_WORD_LENGTH;
        }
        // increments the count of the value of the length of the word 
        word_lengths[wlength]++;
        wlength = 0;
      }
    } else {
      wlength++;
    }
  }
  printf("\nWord Length Histogram:\n");
  for (int i = 1; i <= MAX_WORD_LENGTH; ++i) {
    printf("%2d", i);
    for (int j = 0; j < word_lengths[i]; ++j) {
      putchar('*');
    }
    printf("\n");
  }
  return 0;

}
