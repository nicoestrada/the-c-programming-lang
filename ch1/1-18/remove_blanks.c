#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LINE_LEN 1000

void trim_whitespace(char line[]) {
    int i = strlen(line) - 1;
    
    while (i >= 0 && isspace((unsigned char)line[i])) {
        i--;
    }
    
    line[i + 1] = '\0';
}

int main() {
    // Test case
    char test[] = "ok                                    ";
    printf("Before trim: '%s'\n", test);
    trim_whitespace(test);
    printf("After trim: '%s'\n", test);

    // Original input processing
    char line_arr[MAX_LINE_LEN];
    while (fgets(line_arr, MAX_LINE_LEN, stdin) != NULL) {
        trim_whitespace(line_arr);
        if (line_arr[0] != '\0') {
            printf("%s\n", line_arr);
        }
    }
    return 0;
}
