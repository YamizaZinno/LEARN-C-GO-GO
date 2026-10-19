#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    int a[105];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    m = m % n;
    for (int i = m; i < n; i++) printf("%d ", a[i]);
    for (int i = 0; i < m; i++) printf("%d ", a[i]);
}