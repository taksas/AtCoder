// ARC143 - C

#include <iostream>
#include <vector>
#include <algorithm>

#define rp(n,i) for (long long int i = 0; i < n; i++)
using namespace std;

int main() {
    int N, X, Y; cin >> N >> X >> Y;
    vector<int> I(N);
    for (auto&& i : I) {
        cin >> i;
    } 

    int check = 0;
    int test = 1;
    while(test) {
        test = 0;
        sort(I.begin(), I.end());

        if(check == 0) {

            rp(N,i) {
                if (I[i] >= X) {
                    I[i] -= X;
                    check = 1;
                    test = 1;
                }
            }
        } else {
            rp(N,i) {
                if (I[i] >= Y) {
                    I[i] -= Y;
                    check = 0;
                    test = 1;
                }
            }
        }


    }

    if (check == 0) {
        cout << "Second" << endl;
    } else {
        cout << "First" << endl;
    }

    return 0;
}