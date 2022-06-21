//NOT_FINISHED

#include <iostream>
#include <vector>

#define rp(n,i) for(int i=0;i<n;i++)

using namespace std;

int main() {
    int N; cin >> N;
    vector<int> kukan(N * 2);
    vector<int> temp(N * 2);

    for(auto& x : kukan) {
        cin >> x;
    }
    int tempn = 0, tempn2 = 0;
    rp(N,i) {
        if(kukan[i * 2] != 0 && kukan[i * 2 + 1] != 0) {
        rp(N,j) {
            if (kukan[i * 2] <= kukan[j * 2] && kukan[i * 2 + 1] >= kukan[j * 2 + 1]           && i != j && kukan[i * 2] != 0 && kukan[i * 2 + 1] != 0 && kukan[j * 2] != 0 && kukan[j * 2 + 1] != 0) {
                kukan[j * 2] = 0;kukan[j * 2 + 1] = 0;
            }
            if(kukan[i * 2 + 1] >= kukan[j * 2] && kukan[i * 2 + 1] < kukan[j * 2 + 1]         && i != j && kukan[i * 2] != 0 && kukan[i * 2 + 1] != 0 && kukan[j * 2] != 0 && kukan[j * 2 + 1] != 0) {
                kukan[i * 2 + 1] = kukan[j * 2 + 1];
                kukan[j * 2] = 0;kukan[j * 2 + 1] = 0;
            }
        }
        }
    }
    int te3 = 0;
    rp(N,i) {
        if(kukan[i * 2] != 0 && kukan[i * 2 + 1] != 0) {
            temp[te3++] = kukan[i * 2]; temp[te3++] = kukan[i * 2 + 1];
        }
    }

    rp((te3/2 - 1),i) {
        if(temp[i * 2] > temp[i * 2 + 2] ) {
            int te1 = temp[i * 2], te2 = temp[i * 2 + 1];
            temp[i * 2] = temp[i * 2 + 2]; temp[i * 2 + 1] = temp[i * 2 + 3];
            temp[i * 2 + 2] = te1; temp[i * 2 + 3] = te2;
        }
    }
    rp((te3/2),i) {
            cout << temp[i * 2] << " "; cout << temp[i * 2 + 1] << "\n";
    }

    return 0;
}