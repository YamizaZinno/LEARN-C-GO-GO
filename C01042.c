#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        long long prod = 1;
        for(int j = 1; j <= i; j++){
            prod *= j;
        }
        sum += prod;
    }
    printf("%lld", sum);
}