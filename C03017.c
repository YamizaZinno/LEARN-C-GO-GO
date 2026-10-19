#include <stdio.h>
#include <string.h>

int palin(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[25];
        scanf("%s", s);
        printf("%s\n", palin(s) ? "YES" : "NO");
    }
}