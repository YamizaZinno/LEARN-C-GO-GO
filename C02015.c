#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int limit = 2 * i - 1;
        for (int j = 1; j <= limit; ++j) {
            printf("%d", j);
        }
        printf("\n");
    }
}