#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    char cur = 'a';
    for (int i = 1; i <= n; i++) {
        if (i & 1) {
            for (int j = 0; j < i; j++) {
                printf("%c", cur + j);
                if (j < i - 1) printf(" ");
            }
            cur += i;
        } else {
            for (int j = i - 1; j >= 0; j--) {
                printf("%c", cur + j);
                if (j > 0) printf(" ");
            }
            cur += i;
        }
        printf("\n");
    }
}