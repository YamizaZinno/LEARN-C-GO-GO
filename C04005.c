#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    int a[105];
    int mx = -1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > mx) {
            mx = a[i];
        }
    }
    printf("%d\n", mx);
    for (int i = 0; i < n; i++) {
        if (a[i] == mx) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}