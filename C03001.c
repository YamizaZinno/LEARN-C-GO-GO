#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("%s", sum % 10 == 0 ? "YES\n" : "NO\n"); 
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}