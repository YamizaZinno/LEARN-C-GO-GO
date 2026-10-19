#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int lst = n % 10;
        int fst = n;
        while (fst >= 10) {
            fst /= 10;
        }
        printf("%s\n", fst == lst ? "YES" : "NO");
    }
}