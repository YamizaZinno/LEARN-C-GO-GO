#include <stdio.h>

long long list[1100];
int total = 0;

void prep() {
    long long q[1100];
    int head = 0, tail = 0;
    for (int i = 0; i <= 9; i++) {
        q[tail++] = i;
        list[total++] = i;
    }
    while (head < tail) {
        long long u = q[head++];
        int last = u % 10;
        for (int nxt = 0; nxt < last; nxt++) {
            long long v = u * 10 + nxt;
            q[tail++] = v;
            list[total++] = v;
        }
    }
}

int main() {
    prep();
    int t;
    scanf("%d", &t);
    while (t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        int cnt = 0;
        for (int i = 0; i < total; i++) {
            if (list[i] >= a && list[i] <= b) cnt++;
        }
        printf("%d\n", cnt);
    }
}