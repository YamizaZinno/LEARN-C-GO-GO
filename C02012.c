#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    for (int i = 1; i <= r; i++) {
        if (i <= c) {
            for (int j = i; j >= 1; j--) {
                printf("%d", j);
            }
            for (int j = 2; j <= c - i + 1; j++) {
                printf("%d", j);
            }
        } else {
            for (int j = i; j >= i - c + 1; j--) {
                printf("%d", j);
            }
        }
        printf("\n");
    }

}