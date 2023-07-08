// ABC309 - D
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


vector<int> lists;
vector<vector<int>> AB;
int longest[2] = {0, 0};
queue<pair<int,long long int>> que;

void xfs(int io, int n);

int main() {
    int N1, N2, M; cin >> N1 >> N2 >> M;
    vector<vector<int>> ABt(N1+N2+1);
    vector<int> list_temp(N1+N2+1, -1); lists = list_temp;
    rep(i,0,M) {
        int a, b; cin >> a >> b;
        ABt[a].push_back(b);
        ABt[b].push_back(a);
    }
    AB = ABt;
    xfs(0, 1);
    queue<pair<int,long long int>> quet;
    que = quet;
    xfs(1, N1+N2);
    cout << longest[0] + longest[1] + 1 << endl;
}

void xfs(int io, int n) {
    
    que.push({n,0});
    while (!que.empty()) {
        int v = que.front().first; long long int length = que.front().second;
        que.pop();
        if(longest[io] < length) longest[io] = length;
        lists[v] = length;

        rep(i,0,AB[v].size()) {
            if(lists[AB[v][i]] == -1) {
                lists[AB[v][i]] = length+1;
                que.push({AB[v][i], length+1});
            }
        }
    }
    
}