#include <stdio.h>

int main(){
    long long n, mx = 0;
    while(scanf("%lld", &n) == 1){
        if(n > mx) mx = n;
    }
    printf("%lld", mx);
}