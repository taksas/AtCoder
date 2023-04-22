// ABC299 - B
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



#include <atcoder/all>



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
using namespace atcoder;


int main() {
    int N, T; cin >> N >> T;
    vector<int> C(N), R(N);
    rep(i,N) cin >> C[i];
    rep(i,N) cin >> R[i];

    vector<pair<int,int>> waiting, waitingT; 
    
    

    rep(i,N) {
        if(C[i] == C[0]) waiting.push_back({R[i],i+1});
        if(C[i] == T) waitingT.push_back({R[i],i+1});
    }
    
    if(waitingT.size() != 0) {
        sort(waitingT.begin(), waitingT.end());
        cout << waitingT[waitingT.size()-1].second << endl;
    } else {
        sort(waiting.begin(), waiting.end());
        cout << waiting[waiting.size()-1].second << endl;
    }
    
    
    return 0;
    
}