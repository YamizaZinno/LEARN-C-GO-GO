#include <stdio.h>

void solve(int t) {
    int n;
    scanf("%d", &n);

    int a[105];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int b[105];
    int mx = 1;

    b[0] = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            b[i] = b[i - 1] + 1;
        } else b[i] = 1;
        if (b[i] > mx) mx = b[i];
    }

    printf("Test %d:\n", t);
    printf("%d\n", mx);
    for (int i = 0; i < n; i++) {
        if (b[i] == mx) {
            for (int j = i - mx + 1; j <= i; j++) printf("%d ", a[j]);
            printf("\n");
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) solve(i);

}