#include <stdio.h>
#include <string.h>

void solve() {
    char s[20];
    scanf("%s", s);
    int len = strlen(s);
    int first = s[0] - '0';
    int last = s[len - 1] - '0';
    if (first != 2 * last && last != 2 * first) {
        printf("NO\n");
        return;
    }
    
    int l = 1;
    int r = len - 2;
    while (l < r) {
        if (s[l] != s[r]) {
            printf("NO\n");
            return;
        }
        l++;
        r--;
    }
    printf("YES\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}