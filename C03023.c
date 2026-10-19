#include <stdio.h>

int check(int n) {
    int nn = n;
    int rn = 0;
    
    while (n > 0) {
        int d = n % 10;
        if (d == 9) return 0;
        rn = rn * 10 + d;
        n /= 10;
    }
    if (nn == rn) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 2; i < n; i++) {
        if (check(i)) {
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\n%d\n", cnt);
}