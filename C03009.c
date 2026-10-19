#include <stdio.h>

int main(){
    const int num[] = {1, 2, 145, 40585};
    int n;
    scanf("%d", &n);
    for(int i = 0; i < 4; i++){
        if(num[i] < n) printf("%d ", num[i]);
    }
    
}