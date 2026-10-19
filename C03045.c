#include <stdio.h>

void solve() {
    long long n;
    scanf("%lld", &n);

    long long mx = 1;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            mx = i; 
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) mx = n;
    printf("%lld\n", mx);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
    return 0;
}