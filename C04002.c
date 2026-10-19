#include <stdio.h>
#include <math.h>

int snt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void solve() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (snt(x)) printf("%d ", x);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}