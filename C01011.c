#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%s", (n & 1) ? "LE" : "CHAN");
    return 0;
}