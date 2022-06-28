// ARC143 - A 

#include <iostream>
#include <vector>
#include <algorithm>

#define rp(n,i) for (long long int i = 0; i < n; i++)
using namespace std;

int main() {
    vector<long long int> I(3);
    for (auto&& i : I) {
        cin >> i;
    } 
    sort(I.begin(), I.end());
    if (I[2] - I[1] <= I[0] ) {
        cout << I[2] << endl; 
    } else {
        cout << -1 << endl; 
    }

    return 0;
}