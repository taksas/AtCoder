// ABC087 - C

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A1(N), A2(N);
    for(auto&& a1: A1) {
        cin >> a1;
    }
    for(auto&& a2: A2) {
        cin >> a2;
    }
    int r = 0;
    int temp;
    for(int i = 0; i < N; i++) {
        temp = 0;
        for(int j = 0; j <= i; j++) {
            temp += A1[j];
        }
        for(int j = i; j < N; j++) {
            temp += A2[j];
        }
        r = max(r,temp);
    }
    cout << r << endl;
}