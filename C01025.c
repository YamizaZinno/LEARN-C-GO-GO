#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }
int min(int a, int b) { return a < b ? a : b; }

int main() {
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
    
    int mn_x = min(x1, x3);
    int mn_y = min(y1, y3);
    int mx_x = max(x2, x4);
    int mx_y = max(y2, y4);
    int s = max(mx_x - mn_x, mx_y - mn_y);
    printf("%d\n", s * s);
}