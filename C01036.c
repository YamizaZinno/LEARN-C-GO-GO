#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long prod = 1;
    while (n > 0) {
        prod *= (n % 10);
        n /= 10;
    }
    
    printf("%lld\n", prod);
}