// ARC163 - A
// REALTIME
// rnd
// SHOULD?


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
    int T; cin >> T;
    rep(i,0,T) {
        bool ans = false;
        int N; cin >> N;
        string S; cin >> S;
        
        string A(1,S[0]);
        string B = ""; rep(i,1,N) B += S[i];
        if(A<B) {
            ans = true;
        } else {
            rep(i,1,N-1) {
                A += S[i]; B.erase(0,1);
                if(A<B) {
                    ans = true;
                    break;
                }
            }
        }
        

        cout << (ans?"Yes":"No") << endl;
    }
    
    
    
    
    
    
    return 0;
    
}