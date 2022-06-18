#include <stdio.h>

int main(void) {
    int a, b = 1;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        b *= 2;
    }
    printf("%d", b);
}