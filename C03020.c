#include <stdio.h>

int check(long long n) {
    int sum = 0;
    int has6 = 0;
    
    while (n > 0) {
        int d = n % 10;
        if (d == 6) {
            has6 = 1;
        }
        sum += d;
        n /= 10;
    }
    return has6 && (sum % 10 == 8);
}

void gen(long long a, long long b) {
    int mx = 0;
    long long temp_b = b;
    while (temp_b > 0) {
        mx++;
        temp_b /= 10;
    }
    if (mx == 0) mx = 1;

    for (int len = 1; len <= mx; len++) {
        int half = (len + 1) / 2;
        int l = 1;
        for (int i = 1; i < half; i++) l *= 10;
        int r = l * 10 - 1;

        for (int i = l; i <= r; i++) {
            long long pal = i;
            int temp = i;
            if (len % 2 != 0) temp /= 10;
            while (temp > 0) {
                pal = pal * 10 + (temp % 10);
                temp /= 10;
            }
            if (pal > b) return; 
            if (pal >= a && check(pal)) printf("%lld ", pal);
        }
    }
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a > b) {
        long long temp = a;
        a = b;
        b = temp;
    }
    
    gen(a, b);
    printf("\n");
}