#include <stdio.h>

void solve(int t) {
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);
    int a[105], b[105];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
    printf("Test %d:\n", t);
    for (int i = 0; i < p; i++) printf("%d ", a[i]);
    for (int i = 0; i < m; i++) printf("%d ", b[i]);
    for (int i = p; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) solve(i);
}