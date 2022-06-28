#include <stdio.h>

//NOT_FINISHED

int check(int i, int n, int num[], int k) {
    int bai = 1;
    if (n == k) {
        return 1;
    }
    for(int j = 1; j <= i + 1; j++) {
        bai = 1;
        for (int k = 1; k < j; k++) {
            bai *= 10;
        }
        n += num[i + 1 - j] * bai;
    }
    if (n == k) {
        return 1;
    } else {
        return 0;
    }
}

int calc(int n, int i, int k) {
    int num[13] = {0}, bai = 1, tem = 0;
    for(int j = 1; j <= i + 1 ; j++) {
        bai = 1;
        for (int k = 1; k < j; k++) {
            bai *= 10;
        }
        num[j - 1] = (n / bai) % 10;
    }

    n = 0;
    if(num[0] == 0) {
        for (int j1 = 0; j1 < i; j1++) {
            if(num[j1] == 0) {
                tem++;
            }
        }
        for(int j = tem; j <= i ; j++) {
            bai = 1;
            for (int k = 1; k < j; k++) {
                bai *= 10;
            }
            n += num[i + 1 - j] * bai;
        }
    } else {
        if(check(i, n, num, k)) {
            return -1;
        } else {
            return -2;
        }
        
    }

    if (n <= k) {
        return 0;
    } else {
        return n;
    }


}

int main(void) {
    int n, k, r = 0, i, temp, ok = 0;
    char s[100];
    scanf("%d %d" ,&n, &k);
    
    
    for (int i1 = n; i1 > 0; i1--){
        //printf("%d ", i1);
        n = i1;
        if(i1 < k) {
            break;
        }
        for(i = 0,temp = n; 10 < temp; i++) {
        temp /= 10;
        }
    while(1) {
        if (i1 == k){
            ok = 1;
            //printf("\nFOUND!!\n");
            break;
        }
        int nr = calc(n, i, k);
        if(nr == -1) {
            ok = 1;
            //printf("\nFOUND!!\n");
            break;
        } else if (nr == -2) {
            ok = 0;
            break;
        }
        if (nr > k) {
            n = nr;
            for(i = 0,temp = nr; 10 < temp; i++) {
                temp /= 10;
            }
        } else {
            ok = 0;
            break;
        }
    }
    if (ok == 1) {
        r++;
    }
    }
    
    


    printf("%d", r);
    return 0;
}