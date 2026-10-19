#include <stdio.h>

void solve(int t) {
    int n;
    scanf("%d", &n);
    
    printf("Test %d:", t);
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            printf(" %d(%d)", i, cnt);
        }
    }
    
    if (n > 1) printf(" %d(1)", n);
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) solve(i);
}