#include <stdio.h>

int main(void) {
    int a, b[100], n[5] = { 0 }, r = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < a; i++) {
        n[0] += 1;
        for (int k = 0; k < b[i]; k++) {
            for (int j = 4; j >= 1; j--) {
                n[j] = n[j - 1];
                if ( n[4] > 0 ) {
                    r += 1;
                    n[4] = 0;
                }
            }
            n[0] = 0;
            
        }
    }
    printf("%d", r);
    return 0;
}