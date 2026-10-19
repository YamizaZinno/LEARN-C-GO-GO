#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", '@' + 2 * j);
        }
        for (int j = i - 2; j >= 0; j--) {
            printf("%c", '@' + 2 * j);
        }
        printf("\n");
    }
}