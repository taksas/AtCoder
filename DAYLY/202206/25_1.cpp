// ABC071 - B
// NOT_YET

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    char L[27] = "abcdefghijklmnopqrstuvwxyz";
    string S; cin >> S;
    sort(S.begin(), S.end());
    int temp = 0;
    if ( S.length() == 1) {
        if (S[0] == L[temp]) {
                temp++;
            }
        cout << L[temp] << endl;
        return 0;
       }
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == L[temp]) {
            if (S[i + 1] != L[temp]) {
                temp++;
            }
            continue;
        }
        cout << L[temp] << endl;
        return 0;
    }
    cout << "None" << endl;
    return 0;
}