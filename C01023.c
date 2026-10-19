#include <stdio.h>


int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        int mx = 0, mn = 9; 
        do {
            int d = n % 10;
            if (d > mx) mx = d;
            if (d < mn) mn = d;
            n /= 10;
        } while (n > 0);
        printf("%d %d\n", mx, mn);
    }
}