#include <stdio.h>

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    long long n, m;
    scanf("%lld %lld", &n, &m);
    if (n > m) {
        long long temp = n;
        n = m;
        m = temp;
    }
    long long ans = 1;
    for (long long i = n; i <= m; i++) ans = lcm(ans, i);
    printf("%lld\n", ans);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}