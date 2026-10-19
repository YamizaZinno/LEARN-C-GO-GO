#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long sum_u = 0, sum_d = 0;
    long long min_u = 2e18, min_d = 2e18;
    
    for (int i = 0; i < n; i++) {
        long long u, d;
        scanf("%lld %lld", &u, &d);
        sum_u += u;
        sum_d += d;
        if (u < min_u) min_u = u;
        if (d < min_d) min_d = d;
    }
    
    long long ans1 = sum_u + min_d;
    long long ans2 = min_u + sum_d;
    long long ans = (ans1 > ans2) ? ans1 : ans2;
    
    printf("%lld\n", ans);
    
    return 0;
}