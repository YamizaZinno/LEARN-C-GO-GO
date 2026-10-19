#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int s = sqrt(n);
        printf("%s\n", s * s == n ? "YES" : "NO");
    }
}