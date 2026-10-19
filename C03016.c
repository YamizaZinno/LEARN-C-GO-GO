#include <stdio.h>

int f[100];

void solve(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i <= 92; i++){
        if(n == f[i]){
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
}

int main(){
    f[0] = 0;
    f[1] = 1; f[2] = 1;
    for(int i = 3; i <= 92; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    int t;
    scanf("%d", &t);
    while(t--) solve();
}