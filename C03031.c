#include <stdio.h>

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        printf("%s", gcd(a, b) == gcd(c, d) ? "YES\n" : "NO\n");
    }
}