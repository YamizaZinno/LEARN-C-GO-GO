#include <stdio.h>

int check(int n) {
    int nn = n;
    int rev = 0;
    int sum = 0;

    while (n > 0) {
        int d = n % 10;
        if (d == 4) return 0;
        sum += d;
        rev = rev * 10 + d;
        n /= 10;
    }
    if (sum % 10 != 0) return 0;
    if (rev != nn) return 0;
    return 1;
}

void solve() {
    int n;
    scanf("%d", &n);
    int st = 1;
    for (int i = 1; i < n; i++) {
        st *= 10;
    }
    int en = st * 10 - 1;

    for (int i = st; i <= en; i++) {
        if (check(i)) printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}