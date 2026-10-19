#include <stdio.h>

int f[100];

int main(){
    f[0] = 0;
    f[1] = 1; f[2] = 1;
    for(int i = 3; i <= 92; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("%d ", f[i]);
    }
}