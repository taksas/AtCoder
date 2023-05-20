// ABC302 - C
// REALTIME
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


int similarity(string s1, string s2);

int main() {
    int N, M; cin >> N >> M;
    vector<string> S(N); rep(i,N) cin >> S[i];
    dsu d(N);
    
    rep(i,N) {
        rep(j,N) {
            if(similarity(S[i], S[j]) <= 1) d.merge(i,j);
        }
    }
    if(d.size(0) == N) cout << "Yes";
    else cout << "No";
    cout << endl;
    return 0;
    
}



int similarity(string s1, string s2) {
    int diff = 0;
    rep(i,s1.length()) {
        char t1 = s1[i], t2 = s2[i];
        if(t1 == t2) continue;
        diff++;
    }
    return diff;
}