#include <stdio.h>
#include <math.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int l = ceil(sqrt(m));
    int r = sqrt(n);  
    printf("%d\n", r - l + 1);
    for (int i = l; i <= r; i++) printf("%d\n", i * i);
}