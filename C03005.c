#include <stdio.h>

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i < b; i++) {
        for (int j = i + 1; j <= b; j++) {
            if (gcd(i, j) == 1) printf("(%d,%d)\n", i, j);
        }
    }
}