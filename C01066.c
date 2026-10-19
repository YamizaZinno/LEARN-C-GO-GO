#include <stdio.h>
#include <stdlib.h>

int a[3];

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){
    for(int i = 0; i < 3; i++){
        scanf("%d", &a[i]);
    }
    qsort(a, 3, sizeof(int), cmp);
    printf("%d", a[0]);

}