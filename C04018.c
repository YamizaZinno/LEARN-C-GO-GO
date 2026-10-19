#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    int a[35];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) cnt++;
    }
    printf("%d\n", cnt);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}