#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int val;     
    int count;    
    int pos;  
} Data;

int dec(int n) {
    int last = 10;
    while (n > 0) {
        int d = n % 10;
        if (d > last) return 0;
        last = d;
        n /= 10;
    }
    return 1;
}

int cmp(const void *a, const void *b) {
    Data *e1 = (Data *)a;
    Data *e2 = (Data *)b;
    if (e1 -> count != e2 -> count) {
        return e2 -> count - e1 -> count;
    }
    return e1 -> pos - e2 -> pos;
}

int main() {
    Data list[100005];
    int sz = 0;
    int n;

    while (scanf("%d", &n) != -1) {
        if (dec(n)) {
            int found = -1;
            for (int i = 0; i < sz; i++) {
                if (list[i].val == n) {
                    found = i;
                    break;
                }
            }

            if (found != -1) list[found].count++;
            else {
                list[sz].val = n;
                list[sz].count = 1;
                list[sz].pos = sz;
                sz++;
            }
        }
    }
    qsort(list, sz, sizeof(Data), cmp);
    for (int i = 0; i < sz; i++) printf("%d %d\n", list[i].val, list[i].count);
}