#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int first = 1;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            if (first) {
                printf("%d", i);
                first = 0;
            } else printf("x%d", i);
            n /= i;
        }
    }
}