// ABC318 - D
// DIRECT
// 2nd
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


int ans = 0;
int N;
vector<vector<int>> D;
vector<bool> selections;

void xfs(int ans_temp);


int main() {
    cin >> N; 
    vector<vector<int>> D_temp(N+1,vector<int>(N+1,0));
    rep(i,1,N) rep(j,i+1,N+1) cin >> D_temp[i][j];
    D = D_temp;
    vector<bool> selections_temp(N+1,false);
    selections = selections_temp;
    if(N%2==1) N++;
    xfs(0);
    cout << ans << endl;
    return 0;
    
}
 
void xfs(int ans_temp) {

    ans = max<int>(ans, ans_temp);

    rep(i,1,N) {
        if(selections[i]) continue;
        selections[i] = true;
        rep(j,i+1,N+1) {
            if(selections[j] || i == j) continue;
            selections[j] = true;
            xfs(ans_temp + D[i][j]);
            selections[j] = false;
        }
        selections[i] = false;
    }
    
}