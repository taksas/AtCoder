// ABC158 - D
// 49%
// rnd
// COPYED


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
    deque<char> S;
    string temp; cin >> temp;
    rep(i,0,temp.length()) S.push_back(temp[i]);
    int Q; cin >> Q;
    bool flow = true;
    rep(i,0,Q) {
        int que; cin >> que;
        if(que == 1) flow = !flow;
        else {
            int f; char c; cin >> f >> c;
            if(f==1) (flow ? S.push_front(c) : S.push_back(c));
            else (flow ? S.push_back(c) : S.push_front(c));

        }
    }
    
    
    if(flow) {
        auto itr = S.begin();
        rep(i,0,S.size()) cout << *(itr++);
    } else {
        auto itr = S.end();
        itr--;
        for(int i = S.size()-1; i >= 0; i--) cout << *(itr--);
    }
    cout << endl;
    
    return 0;
    
}