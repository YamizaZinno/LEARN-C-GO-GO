#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int start = (i % 2 != 0) ? 1 : 2;
        for (int j = 0; j < i; ++j) {
            printf("%d", start + j * 2);
        }
        printf("\n");
    }
}