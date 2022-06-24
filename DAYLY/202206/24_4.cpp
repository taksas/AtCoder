// ABC103 - B

#include <iostream>


using namespace std;

int main() {
    string S, T; cin >> S >> T;
    int L = S.size();
    for(int i = 0; i < L; i++) {
        int r = 0;
        for (int j = 0; j < L - i; j++) {
            if (S[i + j] != T[j]) {
                r = 1;
                break;
            }
        }
        for (int j = 0; j < i; j++) {
            if (S[j] != T[L - i  + j]) {
                r = 1;
                break;
            }
        }

        if(r == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}