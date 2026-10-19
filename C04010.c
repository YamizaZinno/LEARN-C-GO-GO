#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[105];
    int mn1 = 1e9, mn2 = 1e9;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < mn1) {
            mn2 = mn1;
            mn1 = a[i];
        } else if (a[i] > mn1 && a[i] < mn2) {
            mn2 = a[i];
        }
    }
    printf("%d %d", mn1, mn2);

}