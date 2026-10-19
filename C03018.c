#include <stdio.h>
#include <math.h>

int snt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int sd(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int check(int n) {
    if (n == 0 || n == 1) return 1;
    int f0 = 0, f1 = 1, fn = 1;
    while (fn < n) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return fn == n;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int l = (a < b) ? a : b;
    int r = (a > b) ? a : b;
    for (int i = l; i <= r; i++) {
        if (snt(i) && check(sd(i))) printf("%d ", i);
    }
}