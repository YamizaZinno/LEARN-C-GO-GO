#include <stdio.h>

int gt(int n){
    int prod = 1;
    for(int i = 1; i <= n; i++) prod *= i;
    return prod;
}

int main(){
    int n; 
    scanf("%d", &n);
    int sum = 0;
    int ans = n;
    while(n){
        sum += gt(n % 10);
        n /= 10;
    }
    printf("%d", sum == ans);
}