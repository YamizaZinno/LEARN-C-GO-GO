#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++){
        int cur = i;
        for(int j = 1; j <= m; j++){
            if(cur <= m){
                printf("%c", 'A' + cur - 1);
                cur++;
            }
            else printf("%c", 'A' + m - j);
        }
        printf("\n");
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
}
