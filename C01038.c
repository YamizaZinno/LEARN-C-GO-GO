#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[15];
    scanf("%s", s);
    int len = strlen(s);
    char temp = s[0];
    s[0] = s[len - 1];
    s[len - 1] = temp;
    printf("%d\n", atoi(s));
}