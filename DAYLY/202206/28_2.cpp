// ABC002 - B

#include <iostream>

using namespace std;

int main() {
    string W; cin >> W;
    for(int i = 0; i < W.length(); i++) {
        if(W[i] == 'a' || W[i] == 'i' || W[i] == 'u' || W[i] == 'e' || W[i] == 'o') {
            continue;
        }
        cout << W[i];
    }
    cout << endl;
    return 0;
}