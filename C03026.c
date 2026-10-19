#include <stdio.h>

int palin(long long n) {
    long long nn = n;
    long long rn = 0;
    
    while (n > 0) {
        rn = rn * 10 + (n % 10);
        n /= 10;
    }
    
    return nn == rn;
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    int ok1 = palin(a);
    int ok2 = palin(b);
    printf("%s", ok1 + ok2 == 1 ? "YES" : "NO");
}