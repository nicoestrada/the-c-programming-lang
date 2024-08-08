#include <stdio.h>
#include <string.h>

#define MAX_LINE_LEN 1000

void reverse(char s[]) {
    int i, j;
    char temp;
    int len = strlen(s);
    // two pointer approach, modify input inplace
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
    char line_arr[MAX_LINE_LEN];
    while (fgets(line_arr, MAX_LINE_LEN, stdin) != NULL) {
        reverse(line_arr);
        printf("%s\n", line_arr);
    }
    return 0;
}
