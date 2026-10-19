#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int a[100];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n - 1; i++) {
        int pos = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[pos]) {
                pos = j;
            }
        }
        swap(&a[i], &a[pos]);
        printf("Buoc %d:", i + 1);
        for (int k = 0; k < n; k++) printf(" %d", a[k]);
        printf("\n");
    }
}