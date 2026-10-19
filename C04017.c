#include <stdio.h>
#include <math.h>

int snt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[105];
    int pcnt = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (snt(a[i])) pcnt++;
    }
    printf("%d ", pcnt);
    for (int i = 0; i < n; i++) {
        if (snt(a[i])) printf("%d ", a[i]);
    }
}