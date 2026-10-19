#include <stdio.h>

int gcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    int p = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        b -= a;
    } while (b != 0);
    return a << p;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", gcd(a, b));
    }
}