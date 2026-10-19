#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int val = i + j;
            if (val > c - 1) {
                val = c - 1;
            }
            printf("%c", '@' + val);
        }
        printf("\n");
    }

}