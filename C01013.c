#include <stdio.h>

int main(){
    long long n, mx = 0, mn = 1e9;
    while(scanf("%lld", &n) == 1){
        if(n > mx) mx = n;
        if(n < mn) mn = n;
    }
    printf("%lld %lld", mx, mn);
}