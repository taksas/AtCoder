// ABC312 - B
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


vector<vector<char>> Slist;

bool checker(int n, int m);

int main() {
    int N, M; cin >> N >> M;
    vector<vector<char>> SlistT(N,vector<char>(M));
    rep(i,0,N) {
        string temp; cin >> temp;
        rep(j,0,M) SlistT[i][j] = temp[j];
    }
    Slist = SlistT;
    
    rep(i,0,N-8) rep(j,0,M-8) {
        if(checker(i,j)) cout << i+1 << " " << j+1 << endl;
    }
    
    return 0;
    
}


bool checker(int n, int m) {
    rep(i,n,n+4) rep(j,m,m+4) {
        if(i != n+3 && j != m+3) {
            if(Slist[i][j] != '#') return false;
        } else {
            if(Slist[i][j] != '.') return false;
        }
    }

    rep(i,n+5,n+9) rep(j,m+5,m+9) {
        if(i != n+5 && j != m+5) {
            if(Slist[i][j] != '#') return false;
        } else {
            if(Slist[i][j] != '.') return false;
        }
    }

    return true;
}