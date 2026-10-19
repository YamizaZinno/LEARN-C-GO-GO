#include <stdio.h>

int sumd(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (sumd(a) <= sumd(b)) printf("%d %d\n", a, b);
    else printf("%d %d\n", b, a);
}