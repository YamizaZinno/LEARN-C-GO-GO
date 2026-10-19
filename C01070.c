#include <stdio.h>
#include <math.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    if (a > b) swap(&a, &b);
    if (c > d) swap(&c, &d);
    if (e > f) swap(&e, &f);

    int sum = a * b + c * d + e * f;
    int s = (int)sqrt(sum);

    if (s * s != sum) {
        printf("NO\n");
        return 0;
    }

    if (b < d) { swap(&a, &c); swap(&b, &d); }
    if (b < f) { swap(&a, &e); swap(&b, &f); }

    if (b == s) {
        if (d == s && f == s) {
            if (a + c + e == s) {
                printf("YES\n");
                return 0;
            }
        } 
        else {
            int rem = s - a;
            if ((c == rem || d == rem) && (e == rem || f == rem)) {
                int s2 = (c == rem) ? d : c;
                int s3 = (e == rem) ? f : e;
                if (s2 + s3 == s) {
                    printf("YES\n");
                    return 0;
                }
            }
        }
    }
    printf("NO\n");
}