#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    int ans = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            ans *= i;
            while (n % i == 0) n /= i; 
        }
    }
    
    if (n > 1)  ans *= n;
    printf("%d\n", ans);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}