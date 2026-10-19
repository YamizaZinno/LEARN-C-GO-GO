#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAXN 1000000

bool p[MAXN + 1];

void sieve() {
    memset(p, true, sizeof p);
    p[0] = p[1] = false;
    for (int i = 2; i * i <= MAXN; i++) {
        if (p[i]) for (int j = i * i; j <= MAXN; j += i) p[j] = false;
    }
}

bool palin(int n) {
    int rev = 0, temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (p[i] && palin(i)) {
            printf("%d ", i);
            cnt++;
            if (cnt % 10 == 0) printf("\n");
        }
    }
    if (cnt % 10 != 0) printf("\n");
    printf("\n");
}

int main() {
    sieve();
    int t;
    scanf("%d", &t);
    while (t--) solve();
}