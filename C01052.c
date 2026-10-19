#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                count++;
            }
            if (i * i != n && (n / i) % 2 == 0) {
                count++;
            }
        }
    }
    printf("%d\n", count);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}