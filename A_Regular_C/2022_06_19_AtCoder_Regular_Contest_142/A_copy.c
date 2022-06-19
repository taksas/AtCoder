#include <stdio.h>

//NOT_FINISHED

int calc(int n, int i, int k) {
    int num[13] = {0}, num1[13] = {0}, bai = 1, tem = 0, temp2 = 0;
    for(int j = 1; j <= i + 1 ; j++) {
        bai = 1;
        for (int k1 = 1; k1 < j; k1++) {
            bai *= 10;
        }
        num[j - 1] = (n / bai) % 10;
    }

    for(int j = 1; j <= k + 1 ; j++) {
        bai = 1;
        for (int k1 = 1; k1 < j; k1++) {
            bai *= 10;
        }
        num1[j - 1] = (k / bai) % 10;
    }

    for(int j = 1; j <= i + 1 ; j++) {
        for(int j1 = 1; j1 <= k + 1 ; j1++) {
            if(num[j - 1] == num1[j1 - 1]) {
                for(int j2 = 1; j - 1 + j2 <= i - 1 ; j2++) {
                    if(num[j - 1 + j2] == num1[j1 - 1 +j2]) {
                        temp2++;
                    }
                }
                if(temp2 == i - 1) {
                    return 1;
                }
            }
        }
    }
    return 0;

    



}

int main(void) {
    int n, k, r = 0, i, temp, ok = 0;
    char s[100];
    scanf("%d %d" ,&n, &k);
    
    for(i = 0,temp = n; 10 < temp; i++) {
        temp /= 10;
        }
    for (int i1 = n; i1 > 0; i1--){
        //printf("%d ", i1);
        n = i1;
    if (calc(i1, i, k)) {
        r++;
    }
    }
    
    


    printf("%d", r);
    return 0;
}