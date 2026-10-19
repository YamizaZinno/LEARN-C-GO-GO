#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    printf("%d = ", n);
    int first = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            if (!first) printf(" * ");
            printf("%d^%d", i, cnt);
            first = 0;
        }
    }
    if (n > 1) {
        if (!first) printf(" * ");
        printf("%d^1", n);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}