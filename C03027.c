#include <stdio.h>
#include <stdbool.h>

#define MAXN 1005
bool p[MAXN + 1];

void sieve() {
    for (int i = 2; i <= MAXN; i++) p[i] = true;
    for (int i = 2; i * i <= MAXN; i++) {
        if (p[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                p[j] = false;
            }
        }
    }
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int sumd(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);
    int g = gcd(a, b);
    int sum = sumd(g);
    printf("%s", p[sum] ? "YES\n" : "NO\n");
}

int main() {
    sieve();
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}