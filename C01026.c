#include <stdio.h>
#include <stdbool.h>

bool snt(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    
    return true;
}

int main() {
    int t;
    scanf("%d", &t);  
    while (t--) {
        long long n;
        scanf("%lld", &n);
        printf("%s\n", snt(n) ? "YES" : "NO");
    }
    return 0;
}