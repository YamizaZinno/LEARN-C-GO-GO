#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int cur = i;
        for(int j = 1; j <= i; j++){
            printf("%d ", cur);
            cur += (n - j);
        }
        printf("\n");
    }    
}