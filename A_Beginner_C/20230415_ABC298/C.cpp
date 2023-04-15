// ABC298 - C
// DIFF
// rnd
// SHOULD?


// -----     cpp_snippets_v8.5     -----
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <map>
#include <string>
#include <cmath>
#include <ctime>
#include <functional>
#include <stack>
#include <queue>
#include <deque>
#include <tuple>
#include <cassert>
#include <bitset>
#include <iomanip>
#include <sstream>






#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))

#define vpii(X)                 vector<pair<int, int>> X
#

#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     8e18
#define ll                      long long int


using namespace std;



int main() {
    int N; cin >> N;
    int Q; cin >> Q;
    vector<vector<int>> box(N,vector<int>(0));
    map<int,vector<int>> mp;
    
    rep(i2,Q) {
        int temp; cin >> temp;
        int i; cin >> i;
        
        if(temp == 1) {
            int j; cin >> j;
            box[j-1].push_back(i);
            int anstemp = 1;
            rep(k,mp[i].size()) {
                if(mp[i][k] == j) {
                    anstemp = 0;
                    break;
                }
            }
            if(anstemp) mp[i].push_back(j);
        } else if(temp == 2) {
            sort(box[i-1].begin(), box[i-1].end());
            rep(k,box[i-1].size()) cout << box[i-1][k] << " ";
            cout << endl;
        } else {
            sort(mp[i].begin(), mp[i].end());
            rep(k, mp[i].size()) cout << mp[i][k] << " ";
            cout << endl;
        }
    }
    
    
    
    
    
    return 0;
    
}