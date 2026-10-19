#include <stdio.h>
#include <stdbool.h>

bool shh(int n){
    int sum  = 0;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            sum += i;
            if(i != n / i) sum += n / i;
        }
    }
    return (sum - n) == n;
}

int main(){
    int n; 
    scanf("%d", &n);
    printf("%d", shh(n));
}