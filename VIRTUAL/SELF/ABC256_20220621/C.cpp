#include <iostream>

using namespace std;

#define rp(n,i) for(int i = 1; i <= n; i++)

int main() {
    int hw[6], r = 0;
    rp(6,i) {
        cin >> hw[i - 1];
    }
        rp(28,i0) {
            rp(28,i1) {
                rp(28,i2) {
                    if(i0 + i1 + i2 == hw[0]){
                    rp(28,i3) {
                        rp(28,i4) {
                            rp(28,i5) {
                                if(i3 + i4 + i5 == hw[1]) {
                                rp(28,i6) {
                                    rp(28,i7) {
                                        rp(28,i8) {
                                            if(i6 + i7 + i8 == hw[2] &&
                                               i0 + i3 + i6 == hw[3] &&
                                               i1 + i4 + i7 == hw[4] &&
                                               i2 + i5 + i8 == hw[5] ) {
                                                r++;
                                               }
                                        }
                                    }
                                }
                                }
                            }
                        }
                    }
                    }
                }
            }
        }
    

    cout << r << "\n";
    return 0;



}