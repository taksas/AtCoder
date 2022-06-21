// ABC226 - B
#include <stdio.h>

// NOT_FINISHED

int main(void) {
    int n;
    scanf("%d", &n);
    int *n1 = new int[n];
    int *n2 = new int[n];
    for ( int i = 0; i < n; i++ ) {
        
        scanf("%d", &n1[i]);
        n2 += 1;
        for ( int j = 0; j < n1[i]; j++ ) {
            n2 = new int[n1[i]];
            scanf("%d", &n2[j]);
        }
        
    }
    n2 -= n;
    for ( int i = 0; i < n; i++ ) {
        
        printf("%d", n1[i]);
        n2 += 1;
        for ( int j = 0; j < n1[i]; j++ ) {
            printf("%d", n2[j]);
        }
        puts("\n");
    }
}
