//ABC093 - C

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> N(3);for(int i = 0;i<3;i++)cin >> N[i];
    int r = 0;
    while(1) {
        sort(N.begin(), N.end());
        if(N[1] + 1 <= N[2]){
            N[0]++; N[1]++; r++;
            continue;
        }
        if(N[0] + 2 <= N[2]){
            N[0] += 2; r++;
            continue;
        }
        if(N[0] + 1 == N[2]) {
             N[0]++; N[1]++; r++;
             continue;
        }
        if(N[0] == N[1] && N[1] == N[2]) {
            cout << r << endl;
            return 0;
        }
    }
}