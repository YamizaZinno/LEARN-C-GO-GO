#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);

    int sz = 2 * n - 1;

    for (int i = 0; i < sz; i++) {
        for (int j = 0; j < sz; j++) {
            int dist = min(min(i, sz - 1 - i), min(j, sz - 1 - j));
            
            printf("%d", n - dist);
        }
        printf("\n");
    }

    return 0;
}