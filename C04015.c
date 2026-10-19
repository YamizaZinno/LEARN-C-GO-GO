#include <stdio.h>

void solve(int t) {
    int n;
    scanf("%d", &n);
    int a[105];
    int cnt[100005] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    printf("Test %d:\n", t);
    for (int i = 0; i < n; i++) {
        if (cnt[a[i]] > 0) {
            printf("%d xuat hien %d lan\n", a[i], cnt[a[i]]);
            cnt[a[i]] = 0;
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) solve(i);
}