#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int mx = (n >= m) ? n : m;
    char ch = 'a' + mx - 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int mnij = (i < j) ? i : j;
            printf("%c", ch - mnij);
        }
        printf("\n");
    }
}