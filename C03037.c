#include <stdio.h>
#include <string.h>

int main() {
    char s[25];
    scanf("%s", s);

    int cnt[10] = {0};
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        int d = s[i] - '0';
        cnt[d]++;
    }
    for (int i = 0; i < len; i++) {
        int d = s[i] - '0';
        if ((d == 2 || d == 3 || d == 5 || d == 7) && cnt[d] > 0) {
            printf("%d %d\n", d, cnt[d]);
            cnt[d] = 0;
        }
    }
}