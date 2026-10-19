#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char s[20];
int cnt[10];

int snt(char c){
    return c == '2' || c == '3' || c == '5' || c == '7';
}

int main(){
    scanf("%s", s);
    int n = strlen(s);
    for(int i = 0; i < n; i++){
        if(snt(s[i])){
            int d = s[i] - '0';
            cnt[d]++;
        }
    }
    for(int i = 0; i < n; i++){
        if(snt(s[i])){
            int d = s[i] - '0';
            if(cnt[d]){
                printf("%d %d\n", d, cnt[d]);
                cnt[d] = 0;
            }
        }
    }
}
