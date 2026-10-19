#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    int cnt = 0;
    int mx = -1;
    
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x >= mx) {
            cnt++;
            mx = x;
        }
    }
    printf("%d\n", cnt);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}