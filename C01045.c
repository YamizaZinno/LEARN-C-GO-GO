#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int last = n % 10;
    int first = n;

    while (first >= 10) {
        first /= 10;
    }

    printf("%d %d\n", first, last);

    return 0;
}