// ARC143 - B

#include <iostream>
#include <vector>
#include <algorithm>

#define rp(n,i) for (long long int i = N; i > 0 ; i--)
using namespace std;

int main() {
    int N; cin >> N;
    long long int r = 1;
    rp(N,i) {
        r *= i * i;
        r %= 998244353;
    }
    cout << r * N << endl;

}