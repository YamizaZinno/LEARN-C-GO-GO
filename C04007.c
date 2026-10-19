#include <stdio.h>

int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;
    
    int a[105], b[105];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
    
    int p;
    scanf("%d", &p);
    for (int i = 0; i < p; i++) printf("%d ", a[i]);
    for (int i = 0; i < m; i++) printf("%d ", b[i]);
    for (int i = p; i < n; i++) printf("%d ", a[i]);
}