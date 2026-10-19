#include <stdio.h>
#include <stdbool.h>

bool check(int x) {
    if (x < 6) return false;
    int sum = 1;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            sum += i;
            if (i * i != x) {
                sum += x / i;
            }
        }
    }
    return sum == x;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 6; i < n; i++) if(check(i)) printf("%d ", i);
    printf("\n");
}