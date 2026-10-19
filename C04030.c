#include <stdio.h>
#include <stdlib.h>

int cmp1(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int cmp2(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

void solve(int t) {
    int n;
    scanf("%d", &n);
    
    int a[105], b[105];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    
    qsort(a, n, sizeof(int), cmp1);
    qsort(b, n, sizeof(int), cmp2);
    printf("Test %d:\n", t);
    for (int i = 0; i < n; i++) printf("%d %d ", a[i], b[i]);
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) solve(i);
}