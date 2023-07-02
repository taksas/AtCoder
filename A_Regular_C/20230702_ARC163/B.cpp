// ARC163 - B
// REALTIME
// rnd
// NOT_YET


// -----     cpp_snippets_v8.11     -----
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

#define MAXINT                  2147483647
#define MININT                  -2147483648
#define MAXLL                   9223372036854775807
#define MINLL                   -9223372036854775808
#define INFI                    (INT_MAX / 2)
#define INFL                    (1LL << 60)
#define ll                      long long int
#define ull                     unsigned long long int

#define rep(i,st,fn)            for (int i = st; i < fn; i++)
#define vrep(X)                 for (auto&& x : X)
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define nextP(X)                next_permutation(X.begin(), X.end())

using namespace std;
using namespace atcoder;
using mint = modint998244353;


int main() {
    int N, M; cin >> N >> M;
    int A1, A2; cin >> A1 >> A2;
    vector<int> A(N-2); vrep(A) cin >> x;
    sort(A.begin(), A.end());
    int A1p = N-2, A2p = -1;
    rep(i,0,N-2) {
        if(A[i] >= A1) {
            A1p = i;
            break;
        }
    }
    for(int i = N-3; i >= 0; i--) {
        if(A[i] <= A2) {
            A2p = i;
            break;
        }
    }

    ll ans = 0;
    queue<int> A1diff, A2diff;
    int A1p2= A1p, A2p2 = A2p;
    while(A1p != 0) {
        A1diff.push(A1-A[A1p-1]);
        A1 = A[A1p-1];
        A1p--;
    }
    while(A2p != N-3) {
        A2diff.push(A[A2p+1]-A2);
        A2 = A[A2p+1];
        A2p++;
    }
    A1p = A1p2, A2p = A2p2;
    int total = -1;
    if(A1p != N-2 && A2p != -1) total = A2p - A1p;

    while(total < M-1) {
        if(A1diff.size() != 0 && A1diff.front() < A2diff.front()) {
            ans += A1diff.front();
            A1diff.pop();
        } else {
            ans += A2diff.front();
            A2diff.pop();
        }
        total++;
        
    }
    
    cout << ans << endl; 
    return 0;
    
}