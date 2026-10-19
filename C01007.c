#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    printf("%lld\n", a + b);
    printf("%lld\n", a - b);
    printf("%lld\n", a * b);

    if (b == 0) {
        printf("0\n");
        printf("0\n");
        printf("0\n");
    } else {
        printf("%lld\n", a / b);
        printf("%lld\n", a % b);
        printf("%.2f\n", (double)a / b);
    }

    return 0;
}