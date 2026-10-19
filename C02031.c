#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        for (int i = 1; i <= n; i++) {
            char start = '@' + (n - i);
            int len = n - i + 1;
            for (int j = 0; j < len; j++) {
                printf("%c", start + j);
            }
            printf("\n");
        }
    }
    return 0;
}