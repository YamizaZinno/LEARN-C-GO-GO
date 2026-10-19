#include <stdio.h>
#include <stdbool.h>

#define MAX 1000000
bool pr[MAX + 1];

void sieve() {
    memset(pr, 1, sizeof pr);
    pr[0] = pr[1] = false;
    
    for (int i = 2; i * i <= MAX; i++) {
        if (pr[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                pr[j] = false;
            }
        }
    }
}

void solve() {
    int n;
    scanf("%d", &n);
    for (int p = 2; p <= n / 2; p++) {
        int q = n - p;
        if (pr[p] && pr[q]) {
            printf("%d %d ", p, q);
        }
    }
    printf("\n");
}

int main() {
    sieve();
    int t;
    scanf("%d", &t);
    while (t--) solve();
}