#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    int a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        int ok = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] <= a[j]) {
                ok = 0;
                break;
            }
        }
        if (ok) printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}