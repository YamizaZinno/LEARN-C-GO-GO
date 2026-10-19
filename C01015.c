#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            printf("NO\n");
        } else {
            printf("%.2f\n", -c / b);
        }
    } else {
        double delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("NO\n");
        } else if (delta == 0) {
            double x = -b / (2 * a);
            printf("%.2f\n", x);
        } else {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            if (x1 < x2) {
                double temp = x1;
                x1 = x2;
                x2 = temp;
            }
            printf("%.2f %.2f\n", x1, x2);
        }
    }
}