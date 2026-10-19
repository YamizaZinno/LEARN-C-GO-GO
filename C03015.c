#include <stdio.h>

void solve() {
    long long n;
    scanf("%lld", &n);
    long long mxp = -1;
    while (n % 2 == 0) {
        mxp = 2;
        n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            mxp = i;
            n /= i;
        }
    }

    if (n > 2) mxp = n;
    printf("%lld\n", mxp);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
}