#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a > b) {
            long long temp = a;
            a = b;
            b = temp;
        }
    long long sum = (a + b) * (b - a + 1) / 2;
    printf("%lld\n", sum);
}