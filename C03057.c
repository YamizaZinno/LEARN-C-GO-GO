#include <stdio.h>
#include <string.h>

long long get(char s[], char org, char trans) {
    long long ans = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c == org) c = trans;
        ans = ans * 10 + (c - '0');
    }
    return ans;
}

void solve() {
    char x1[25], x2[25];
    scanf("%s %s", x1, x2);
    long long mn = get(x1, '6', '5') + get(x2, '6', '5');
    long long mx = get(x1, '5', '6') + get(x2, '5', '6');
    printf("%lld %lld\n", mn, mx);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}