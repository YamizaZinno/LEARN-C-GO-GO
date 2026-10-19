#include <stdio.h>

int sumd(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int check(long long n) {
    long long nn = n;
    int sum_n = sumd(n);
    int sumpd = 0;
    long long temp = n;
    int cnt = 0;
    for (long long i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            sumpd += sumd(i);
            temp /= i;
            cnt++;
        }
    }
    if (temp > 1) {
        if (temp == nn) return 0;
        sumpd += sumd(temp);
        cnt++;
    }
    return (sum_n == sumpd);
}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%s", check(n) ? "YES\n" : "NO\n");
}