#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n; scanf("%d", &n);
    int a[105];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n - 1; i++){
        int ok = 1;
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                swap(&a[j], &a[j + 1]);
                ok = 0;
            }
        }
        if(ok) break;
        printf("Buoc %d: ", i + 1);
        for(int i = 0; i < n; i++) printf("%d ", a[i]);
        printf("\n");
    }

}