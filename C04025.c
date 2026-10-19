#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int chan[100], le[100];
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0) chan[even++] = x;
        else le[odd++] = x;
    }

    qsort(chan, even, sizeof(int), cmp);
    qsort(le, odd, sizeof(int), cmp);

    for (int i = 0; i < even; i++) printf("%d ", chan[i]);
    for (int i = 0; i < odd; i++) printf("%d ", le[i]);
}