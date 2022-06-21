#include <iostream>

using namespace std;

int main() {
    int r = 1;
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        r *= 2;
    }
    cout << r;
    return 0;
}