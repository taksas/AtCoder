// ABC312 - C
// REALTIME
// rnd
// SHOULD?


// -----     cpp_snippets_v8.12     -----
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

#define rep(i,st,fn)            for (int i = st; i < fn; i++)
#define rrep(i,st,fn)           for (int i = st; i >= fn; i--)
#define vrep(X)                 for (auto&& x : X)
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))

using namespace std;
using namespace atcoder;
using mint0 = modint998244353;
using mint1 = modint1000000007;


int main() {
    int N, M; cin >> N >> M;
    vector<pair<int,char>> AB; 
    rep(i,0,N) {
        int temp; cin >> temp;
        AB.push_back({temp, 'A'});
    }
    rep(i,0,M) {
        int temp; cin >> temp;
        AB.push_back({temp, 'B'});
    }
    sort(AB.begin(), AB.end()); 


    int ai = 0, bi = 0, X = 0, amin = 0, bmax = 0;
    rep(i,0,N+M) {
        if(AB[i].second == 'A') {
            ai++;
            if(ai == 0) {
                amin = AB[i].first;
            }
        } else {
            bi++;
            if(bi == M) {
                bmax = AB[i].first;
                break;
            }
        }
        if( ai >= M-bi && ai > 0) {
            X = AB[i].first;
            break;
        }
        
        
    }

    cout << (X != 0 ? X : (ai == 0 ? bmax+1 : amin)) << endl;
    return 0;
    
}