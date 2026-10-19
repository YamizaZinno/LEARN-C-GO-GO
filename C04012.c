#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[105];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int ok = 0;
    for (int i = 0; i < n; i++) {
        int ck = 1;
        for (int j = 0; j < i; j++) {
            if (a[j] == a[i]) {
                ck = 0;
                break;
            }
        }
        if (ck) {
            int cnt = 1;
            for (int j = i + 1; j < n; j++) {
                if (a[j] == a[i]) {
                    cnt++;
                }
            }
            
            if (cnt > 1) {
                printf("%d ", a[i]);
                ok = 1;
            }
        }
    }
    if (!ok) printf("0");
}