#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR_LEN 1000

int htoi(char s[]) {
    int result = 0;
    int i = 0;
    while (s[i] != '\0' && s[i] != '\n') {
        result *= 16;
        if (isdigit(s[i])) {
            result += s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            result += s[i] - 'a' + 10;
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            result += s[i] - 'A' + 10;
        } else {
            return -1;
        }
        i++;
    }
    return result;
}

int main() {
    char s[MAX_STR_LEN];
    int ans;
    while (fgets(s, MAX_STR_LEN, stdin) != NULL) {
        ans = htoi(s);
        if (ans == -1) {
            printf("Invalid input\n");
        } else {
            printf("%d\n", ans);
        }
    }
    return 0;
}
