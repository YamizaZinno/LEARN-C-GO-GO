#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int val = i - 1; 
        int step = n - 1;
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + val);
            val += step;
            step--;
        }
        printf("\n");
    }
}