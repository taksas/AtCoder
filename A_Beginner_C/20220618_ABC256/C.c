#include <stdio.h>

// NOT_YET

int main(void) {
    int a, b[6], n[252][3][3] = { 0 }, r = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 1; j <= 28; j++) {
            n[i][j] = j;
        }
    }


    for (int i = 0; i < ; i++) {
        for (int j = 1; j <= 28; j++) {
            if( n[i][j] = j; )
            
        }
    }

    if(n[0][0] + n[0][1] + n[0][2] == b[0] &&
       n[1][0] + n[1][1] + n[1][2] == b[1] &&
       n[2][0] + n[2][1] + n[2][2] == b[2] &&

       n[0][0] + n[1][0] + n[2][0] == b[3] &&
       n[0][1] + n[1][1] + n[2][1] == b[4] &&
       n[0][2] + n[1][2] + n[2][2] == b[5] && ) {

        r += 1;

       }

    printf("%d", r);
    return 0;
}