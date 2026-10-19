#include <stdio.h>

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long g = gcd(a, b);
    long long l = (a / g) * b;
    printf("%lld\n", g);
    printf("%lld\n", l);
}