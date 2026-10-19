#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX 1000000

bool p[MAX + 1];

void sieve() {
    memset(p, 1, sizeof p);
    p[0] = p[1] = false;
    
    for (int i = 2; i * i <= MAX; i++) {
        if (p[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                p[j] = false;
            }
        }
    }
}

void solve() {
    long long L, R;
    scanf("%lld %lld", &L, &R);
    long long l = ceil(sqrt(L));
    long long r = floor(sqrt(R));
    int cnt = 0;
    for (long long i = l; i <= r; i++) cnt += (i <= MAX && p[i]);
    printf("%d\n", cnt);
}

int main() {
    sieve(); 
    int t;
    scanf("%d", &t);
    while (t--) solve();
}