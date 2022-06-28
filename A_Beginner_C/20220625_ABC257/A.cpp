// ABC257 - A

#include <iostream>
#include <vector>
#include <algorithm>

#define rp(n,i) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N,X; cin >> N >> X;
    char M[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if (X % N == 0) {
        cout << M[X / N - 1] << endl;
    } else {
        cout << M[X / N] << endl;
    }
}