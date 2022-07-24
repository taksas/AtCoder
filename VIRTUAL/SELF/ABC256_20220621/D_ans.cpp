#include <iostream>
#include <vector>
#include <algorithm>
 
 
#define rp(n,i) for(int i=0;i<n;i++)
 
using namespace std;
 
int main() {
    int N; cin >> N;
    vector<pair<int, int>> query;
    rp(N,i) {
        int li, lo; cin >> li >> lo;
        query.push_back({li,0}); query.push_back({lo,1});
    }
 
    sort(query.begin(), query.end());
 
    int chk = 0;
    for(auto[l1, l2] : query) {
        if(l2 == 0) {
            if(chk == 0) {
                cout << l1;
                cout << " ";
                
            }
            chk++;
        } else {
            chk--;
            if(chk == 0) {
                cout << l1;
                cout<< "\n";
                
            }

        }
    }
}