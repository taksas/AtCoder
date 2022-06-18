#include <stdio.h>

// NOT_YET

int* checker(int i, int p0, int n[][][][][][][]) {
    int c = 0;
    for (int p1 = 0; p1 < 2; p1++) {
        for (int p2 = 0; p2 < 10; p2++) {
            for (int p3 = 0; p3 < 10; p3++) {
                for (int p4 = 0; p4 < 10; p4++) {
                    for (int p5 = 0; p5 < 10; p5++) {
                        for (int p6 = 0; p6 < 10; p6++) {
                            c++;
                            if (c = i) {
                                return &n[p0][p1][p2][p3][p4][p5][p6];
                            }
                        }
                    }
                }
            }
        }
    }
}

int checker(int i, int p0, int n[][][][][][][]) {
    int c = 0;
    for (int p1 = 0; p1 < 2; p1++) {
        for (int p2 = 0; p2 < 10; p2++) {
            for (int p3 = 0; p3 < 10; p3++) {
                for (int p4 = 0; p4 < 10; p4++) {
                    for (int p5 = 0; p5 < 10; p5++) {
                        for (int p6 = 0; p6 < 10; p6++) {
                            c++;
                            if (c = i) {
                                return n[p0][p1][p2][p3][p4][p5][p6];
                            }
                        }
                    }
                }
            }
        }
    }
}



int main(void) {
    int a,n[2][2][10][10][10][10][10], c[2][10][10][10][10][10] = {0}, cc = 0, r1, r2;

    scanf("%d", &a);
        for (int i = 0; i < a; i++) {
            scanf("%d %d", checker(i,0,n), checker(i,1,n));
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = checker1(i,0,n); j < checker1(i,1,n); j++) {
            c[j] += 1;
        }
    }

    for (int i = 0; i < 200000; i++) {
        if (c[i] == 1) {
            r1 = i;
            for (; i < 200000; i++) {
                if (c[i]) {
                    printf("%d 5d\n", r1, i);
                }
            }
        }
    }

    return 0;
}