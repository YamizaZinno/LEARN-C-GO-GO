#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    
    for (int i = 0; i < r; i++) {
        int start = r - 1 - i;
        if (start > c - 1) {
            start = c - 1;
        }
        for (int j = 0; j < c; j++) {
            int val = start + j;
            if (val > c - 1) {
                val = c - 1;
            }
            printf("%c", 'A' + val);
        }
        printf("\n");
    }
}