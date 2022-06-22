// ABC177 - B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string S; cin >> S;
    string T; cin >> T;
    int slen = S.size(), tlen = T.size();
    int lendiff = slen - tlen;
    if ( lendiff == 0) {
        lendiff = 1;
    }
    vector<int> r(lendiff);
    for (int i = 0; i < (lendiff); i++) {
        r[i] = 0;
        for (int j = 0; j < tlen; j++) {
            if(S.substr(j + i, 1) != T.substr(j, 1)) {
                r[i]++;
            }
        }
    }
    sort(r.begin(), r.end());
    cout << r[0] << endl;
    return 0;
}