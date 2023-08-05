// ABC313 - B
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
    vector<set<int>> lis;
    vector<int> maxim(N,0);
    rep(i,0,M) {
        int a, b; cin >> a >> b;
        int exista = -1, existb = -1;
        rep(j,0,lis.size()) {
            if(lis[j].find(a) != lis[j].end()) exista = j;
            else if(lis[j].find(b) != lis[j].end()) existb = j;
        }

        if(exista != -1 && existb != -1) {
            if(exista == existb) {
                if(maxim[existb] == b) maxim[existb] = -1;
            }
        } else if(exista != -1) {
            lis[exista].insert(b);
        } else if(existb != -1) {
            if(maxim[existb] == b) maxim[existb] = a;
            else  maxim[existb] = -1;
            lis[j].insert(a);
        }
        else if(exista == -1 && existb == -1) {
            set<int> temp;
            temp.insert(a);
            temp.insert(b);
            maxim[lis.size()] = a;
            lis.push_back(temp);
        }
    }
    
    
    if(lis.size() != 1) cout << -1 << endl;
    else cout << maxim[0] << endl;
    return 0;
    
}



if(lis[j].find(a) != lis[j].end()) {
                exista = j;
                lis[j].insert(b);
            } else if(lis[j].find(b) != lis[j].end()) {
                existb = j;
                if(maxim[j] == b) maxim[j] = a;
                else  maxim[j] = -1;
                lis[j].insert(a);
            }