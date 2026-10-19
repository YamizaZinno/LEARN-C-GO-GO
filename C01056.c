#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char s[20];

bool check(char s[]){
     int len = strlen(s);
    for (int i = 0; i < len - 1; i++) {
        if (s[i] > s[i + 1]) {
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%s", s);
        printf("%s\n", check(s) ? "YES" : "NO");
    }

}
