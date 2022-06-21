#include <iostream>

using namespace std;

#define rp(n,i) for(int i=0; i<n; i++)

int main() {
    int r = 0;
    int N; cin >> N;

    int ground[5] = {0};
    rp(N,i) {
        ground[0] += 1;
        int A; cin >> A;
        rp(A,j) {
            int k;
            for(k = 3; k >= 0; k--) {
                ground[k + 1] += ground[k];
                ground[k] = 0; 
            }
            if(ground[4] > 0) {
                r += ground[4];
                ground[4] = 0;
            }
        }
    }
    cout << r << "\n";
    return 0;
}