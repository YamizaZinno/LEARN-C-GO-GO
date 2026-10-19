#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);

    if (a == 0) {
        if (b == 0) {
            printf("Vo so nghiem\n");
        } else {
            printf("Vo nghiem\n");
        }
    } else {
        printf("%.2f\n", -b / a);
    }
}