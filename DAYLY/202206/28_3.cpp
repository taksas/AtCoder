//ABC136 - C


#include <iostream>
#include <vector>

using namespace std;



int main() {
    int N; cin >> N;
    vector<int> H(N);
    for(auto&& h : H) {
        cin >> h;
    }
 
    for(int i = N - 1; i > 0 ; i--) {
        if (H[i] >= H[i - 1]) {
            continue;
        }
        if (H[i] == H[i - 1] - 1) {
                H[i - 1]--;

                continue;
        }
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}