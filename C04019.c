#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    int a[105];
    int cnt[30005] = {0};
    int mx = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
        if (cnt[a[i]] > mx) {
            mx = cnt[a[i]];
        }
    }
    for (int i = 0; i < n; i++) {
        if (cnt[a[i]] == mx) {
            printf("%d ", a[i]);
            cnt[a[i]] = 0;
        }
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}