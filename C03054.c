#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void solve() {
    char s[25];
    scanf("%s", s);

    int len = strlen(s);
    bool ok = true;
    for (int i = 0; i < len; i++) {
        if (s[i] == '0' || s[i] == '8' || s[i] == '9') {
            s[i] = '0';
        } else if (s[i] == '1') {
            s[i] = '1';
        } else {
            ok = false;
            break;
        }
    }
    
    if (!ok) {
        printf("INVALID\n");
        return;
    }
    
    int st = 0;
    while (st < len && s[st] == '0') st++;
    printf("%s\n", st == len ? "INVALID" : s + st);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}