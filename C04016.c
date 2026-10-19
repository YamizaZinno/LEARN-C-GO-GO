#include <stdio.h>
#include <math.h>

int snt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void solve(int t) {
    int n;
    scanf("%d", &n);
    int a[105];
    int cnt[10005] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (snt(a[i])) cnt[a[i]]++;
    }
    printf("Test %d:\n", t);
    for (int i = 2; i <= 10000; i++) {
        if (cnt[i] > 0) {
            printf("%d xuat hien %d lan\n", i, cnt[i]);
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) solve(i);
}