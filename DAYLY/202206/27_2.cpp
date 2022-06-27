// ABC071 - B
// NOT_YET

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int list[26] = {0};
    string S; cin >> S;
    for (int i = 0; i < S.length(); i++) {
        list[ S[i] - 'a' ]++;
    }
    for (int i = 0; i < 26; i++) {
        if(list[i] == 0) {
            cout << char('a' + i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}