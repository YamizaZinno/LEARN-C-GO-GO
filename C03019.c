#include <stdio.h>
#include <math.h>

int solve(int n) {
    if (n <= 1 || n >= 10) return 0;
    int half = (n + 1) / 2;
    int l = pow(10, half - 1);
    int r = pow(10, half) - 1;
    
    int cnt = 0;
    for (int i = l; i <= r; i++) {
        int temp = i;
        int sum1 = 0;
        while (temp > 0) {
            sum1 += temp % 10;
            temp /= 10;
        }

        int sum;
        if (n % 2 == 0) sum = sum1 * 2;
        else sum = sum1 * 2 - (i % 10);
        if (sum % 10 == 0) cnt++;
    }
    return cnt;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", solve(n));
    }
}