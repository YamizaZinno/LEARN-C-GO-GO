#include <stdio.h>

#define MAX 2000000

int spf[MAX + 1];

void sieve() {
    for (int i = 1; i <= MAX; i++) spf[i] = i;
    for (int i = 2; i * i <= MAX; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= MAX; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

int main() {
    sieve();
    
    int n;
    scanf("%d", &n);
    
    long long sum = 0;
    while (n--) {
        int x;
        scanf("%d", &x);
        while (x > 1) {
            sum += spf[x];
            x /= spf[x];
        }
    }
    
    printf("%lld\n", sum);
    
    return 0;
}