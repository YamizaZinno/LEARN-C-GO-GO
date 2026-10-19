#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int cur = 1;
    for(int i = 1; i <= n; i++){
        if(i & 1){
            for(int j = 0; j < i; j++){
                printf("%d ", cur + j);
            }
        } else {
            for(int j = i - 1; ~j; j--){
                printf("%d ", cur + j);
            }
        }
        cur += i;
        printf("\n");
    }
}