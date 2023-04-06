// ARC125 - A
// 49%
// 1st
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


int right_shift(vector<int>, int);
int left_shift(vector<int>, int);

int main() {
    int N, M; cin >> N >> M;
    vector<int> S(N), T(M);
    int one = 0, zero = 0, one1 = 0, zero1 = 0, ans = 0;
    rep(i,N) {
        cin >> S[i];
        if(S[i]) one = 1;
        else zero = 1;
    }
    rep(i,M) {
        cin >> T[i];
        if(T[i]) one1 = 1;
        else zero1 = 1;
    }

    if((one1 && one == 0) || (zero1 == 1 && zero == 0)) {
        cout << -1 << endl;
        return 0;
    }
    int gloi, s0 = S[0], now = (s0+1)%2;

    for(gloi = 0; gloi < M; gloi++) {
        if(s0 != T[gloi]) {
            int rs = right_shift(S, 0), ls = left_shift(S, 0);
            ans += min(rs,N-ls) + 1;
            gloi++;
            break;
        }
        ans++;
    }
    
    for(; gloi < M; gloi++) {
        if(T[gloi] != now) {
            ans++;
            now = (now+1)%2;
        }
        ans++;
    }
    
    cout << ans << endl;
    
    
    return 0;
    
}




int right_shift(vector<int> S, int pointer) {
    int i = pointer, n = S.size();
    while(S[i%n] == S[pointer]) ++i;
    return i;
}


int left_shift(vector<int> S, int pointer) {
    int i = 0, n = S.size();
    while(S[i%n] == S[pointer]) {
        i--;
        if(i < 0) i = n-1;
    }
    return i;
}