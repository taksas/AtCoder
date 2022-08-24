// AAA000 - Q
// ASAKATSU
// rnd
// SHOULD?


// -----     cpp_snippets_v8.4     -----
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <ctime>
#include <functional>
#include <stack>
#include <queue>
#include <tuple>
#include <cassert>
#include <bitset>
#include <iomanip>
#include <sstream>
#include <unordered_set>

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))

#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     1e18
#define ll                      long long int


using namespace std;

int main() {
    string S, T; cin >> S >> T;
    char list[7] = {'a','t','c','o','d','e','r'};
    rep(i,S.length()) {
        char te1; te1 = S[i];
        char te2; te2 = T[i];
        if(te1 != te2) {
            if (te1 == '@') {
                int ans = 1;
                rep(i,7) {
                    if(te2 == list[i]) ans = 0;
                }
                if(ans) {
                    coutd("You will lose");
                    return 0;
                }
            } else if (te2 == '@') {
                int ans = 1;
                rep(i,7) {
                    if(te1 == list[i]) ans = 0;
                }
                if(ans) {
                    coutd("You will lose");
                    return 0;
                }
            } else {
                coutd("You will lose");
                return 0;
            }
        }
    }
    
    
    coutd("You can win");
    return 0;
    
}