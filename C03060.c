#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int cnt = 0;
    int temp = n;
    while (temp > 0) {
        cnt += temp / 2;
        temp /= 2;
    }

    printf("%s", cnt >= k ? "Yes\n" : "No\n");
}