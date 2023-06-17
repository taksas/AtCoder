// ABC271 - C
// 21%
// rnd
// NOT_YET


// -----     cpp_snippets_v8.9     -----
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

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define nextP(X)                next_permutation(X.begin(), X.end())

using namespace std;
using namespace atcoder;
using mint = modint998244353;


int main() {
    int N; cin >> N;
    vector<int> a;
    map<int, bool> soldable;
    int sold = 0;
    rep(i,N) {
        int temp; cin >> temp;
        if(soldable[temp] || temp > N) {
            sold++;
        } else {
            a.push_back(temp);
            soldable[a[i]] = true;
        }
    }
    sort(a.begin(), a.end());
    N = a.size();
    int ans = 0, progress = 0;
    
    rep(i,N) {
        if(progress + 1 == a[i]) {
            ;
        } else if( sold >= 2 ) {
            sold -= 2;
            a.push_back(progress+1);
        } else if( i <= N-1 && sold == 1) {
            a.pop_back();
            sold = 0;
            a.push_back(progress+1);
            N -= 1;
        } else if( i <= N-2 ) {
            a.pop_back();
            a.pop_back();
            a.push_back(progress+1);
            N -= 2;
        } else {
            break;
        }
        sort(a.begin(), a.end());
        progress++;
        ans++;
    }
    
    
    cout << ans + sold/2 << endl;
    
    return 0;
    
}