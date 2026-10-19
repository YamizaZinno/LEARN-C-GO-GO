#include <stdio.h>

int check(long long n) {
    if (n % 2 != 0) return 0;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0) return 0; 
        n /= 10;
    }
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