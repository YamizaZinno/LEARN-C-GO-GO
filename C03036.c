#include <stdio.h>

int check(long long n) {
    long long temp = n;
    long long rev = 0;
    int sum = 0;

    while (temp > 0) {
        int d = temp % 10;
        if (d % 2 == 0) return 0;
        sum += d;
        rev = rev * 10 + d;
        temp /= 10;
    }
    if (sum % 2 == 0) return 0;
    if (rev != n) return 0;
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        printf("%s", check(n) ? "YES\n" : "NO\n");
    }
}