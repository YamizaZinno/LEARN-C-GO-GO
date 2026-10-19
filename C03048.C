#include <stdio.h>
#include <string.h>

void solve() {
    char s[20];
    scanf("%s", s);
    int len = strlen(s);
    int last = s[len - 1] - '0';
    if (last % 2 != 0) {
        printf("NO\n");
        return;
    }
    int chan = 0, le = 0;
    for (int i = 0; i < len; i++) {
        int d = s[i] - '0';
        if (d % 2 == 0) {
            chan++;
        } else {
            le++;
        }
    }
    printf("%s", chan > le ? "YES\n" : "NO\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
}