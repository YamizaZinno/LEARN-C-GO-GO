#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        char start = 'A' + (2 * i - 2);
        for (int j = 0; j < n - i + 1; j++) {
            printf("%c", start + 2 * j);
        }
        printf("\n");
    }
}