// ABC311 - C
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
    int N; cin >> N;
    vector<int> list_all(N+1);
    rep(i,1,N+1) {
        int temp; cin >> temp;
        list_all[i] = temp;
    }

    unordered_set<int> st;
    int i = 1;
    while(1) {
        st.insert(i);
        auto itr = st.find(list_all[i]);
        if( itr != st.end() ) {
            vector<int> ans_list;
            while(itr != st.end()) {
                ans_list.push_back(*itr);
                itr++;
            }
            int sz = ans_list.size();
            cout << sz << endl;
            rep(j,0,sz) {
                cout << ans_list[j] << " ";
            }
            cout << endl;
            return 0;
        } else {
            i = list_all[i];
        }
    }

    return 0;
    
}

