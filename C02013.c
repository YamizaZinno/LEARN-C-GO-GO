#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int mx = (r > c) ? r : c;

    for (int i = 1; i <= r; i++) {
        int init = mx - i + 1;
        
        if (init >= c) {
            for (int j = init; j >= init - c + 1; j--) {
                printf("%d", j);
            }
        } else {
            for (int j = init; j >= 1; j--) {
                printf("%d", j);
            }
            for (int j = 2; j <= c - init + 1; j++) {
                printf("%d", j);
            }
        }
        printf("\n");
    }

    return 0;
}