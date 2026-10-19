#include <stdio.h>
#include <math.h>

int snt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int check(int n) {
    int sum = 0;
    while (n > 0) {
        int d = n % 10;
        if (d != 2 && d != 3 && d != 5 && d != 7) {
            return 0;
        }
        sum += d;
        n /= 10;
    }
    return snt(sum);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        int cnt = 0;
        for (int i = a; i <= b; i++) {
            if (check(i) && snt(i)) {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}