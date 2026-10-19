#include <stdio.h>

int a[1005];
void solve(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    int l = 1, r = n;
    while(l < r){
        if(a[l++] != a[r--]){
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main(){
    int t; scanf("%d", &t);
    while(t--) solve();
}