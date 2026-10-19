#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[105];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int mx1 = -1, mx2 = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] > mx1){
            mx2 = mx1;
            mx1 = a[i];
        } else if (a[i] > mx2 && a[i] < mx1) mx2 = a[i];
    }
    printf("%d %d\n", mx1, mx2);
}