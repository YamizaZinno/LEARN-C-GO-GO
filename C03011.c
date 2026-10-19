#include <stdio.h>

int min(int a, int b){
    return a <= b ? a : b;
}
int max(int a, int b){
    return a >= b ? a : b;
}

int main(){
    const int num[] = {1, 2, 145, 40585};
    int a, b;

    scanf("%d%d", &a, &b);
    for(int i = 0; i < 4; i++){
        if(num[i] >= min(a, b) && num[i] <= max(a, b)) printf("%d ", num[i]);
    }
    
}