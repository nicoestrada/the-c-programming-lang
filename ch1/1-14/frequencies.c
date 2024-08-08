#include <stdio.h>
#include <ctype.h>

#define MAX_CHAR 128 //ASCII input

int main() {
  int i, j, c;
  int frequency_arr[MAX_CHAR] = {0};

  while ((c = getchar()) != EOF) {
    if (c < MAX_CHAR) {
      frequency_arr[c]++;
    }
  }

  for (int i = 0; i < MAX_CHAR; i++) {
    if (frequency_arr[i] > 0) {
      if (isprint(i)) {
        printf("'%c'", i);
      } else {
        printf("%03d:", i);
      }

      // iterate the frequency value itself to make the histogram bar
      for (int j = 0; j < frequency_arr[i]; j++) {
        printf("#");

      }
      printf(" (%d)\n", frequency_arr[i]);
    }
  }
  return 0;
}
