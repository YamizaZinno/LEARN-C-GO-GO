#include <stdio.h>

int a[10];

void btk(int pos, int st, int n) {
    for (int i = st; i <= 9; i++) {
        a[pos] = i;
        if (pos == n) {
            for (int j = 1; j <= n; j++) {
                printf("%d", a[j]);
            }
            printf(" ");
        } else btk(pos + 1, i, n);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        btk(1, 1, n);
        printf("\n");
    }
}