#include <stdio.h>
#include <stdbool.h>

#define MAXN 1000000

bool p[MAXN + 1];

void sieve() {
    for (int i = 2; i < MAXN; i++) p[i] = true;
    for (int i = 2; i * i < MAXN; i++) {
        if (p[i]) for (int j = i * i; j < MAXN; j += i) p[j] = false;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    sieve();
    for (int i = 2; i < n; i++) {
        if (p[i]) printf("%d\n", i);
    }
}