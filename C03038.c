#include <stdio.h>

void solve() {
    int n, p;
    scanf("%d %d", &n, &p);
    int cnt = 0;
    while (n > 0) {
        cnt += n / p;
        n /= p;
    }

    printf("%d\n", cnt);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}