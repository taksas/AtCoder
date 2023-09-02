// ABC318 - A
// REALTIME
// rnd
// NOT_YET


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




long long int ans = 0;
int N;
vector<vector<int>> D;

void xfs(int selected_num, long long int ans_temp, vector<bool> selections);


int main() {
    cin >> N;
    vector<vector<int>> D_temp(N,vector<int>(N,0));
    rep(i,0,N-1) rep(j,i+1,N) cin >> D_temp[i][j];
    D = D_temp;
    
    vector<bool> selections_temp(N,false);
    xfs(0,0,selections_temp);
    cout << ans << endl;
    return 0;
    
}

void xfs(int selected_num, long long int ans_temp, vector<bool> selections) {
    if(selected_num >= N-1) {
        ans = max<long long int>(ans, ans_temp);
        return;
    }
    rep(i,0,N) rep(j,i+1,N) {
        if(selections[i] || selections[j]) continue;
        vector<bool> selections_changed = selections;
        selections_changed[i] = true;
        selections_changed[j] = true;
        xfs(selected_num+2, ans_temp + D[i][j], selections_changed);
    }
    
}