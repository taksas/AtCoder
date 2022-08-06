// ABC263 - A
// REALTIME
// rnd
// SHOULD?

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


// -----     cpp_snippets_v6     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)

#define dcoutd(X)               if(DEBUGGING) cout << X << endl
#define ddefined(X)             if(DEBUGGING) { X }

#define INF                     1e18
#define ll                      long long int


#define DEBUGGING 1

using namespace std;

int main() {
    set<int> N;
    map<int,int> mp;
    rep(i,5) {
        int temp; cin >> temp;
        mp[temp]++;
        N.insert(temp);
    }
    auto itr = N.begin();
    auto itr1 = N.begin();
    itr1++;

    if(mp[*itr] == 3 && mp[*itr1] == 2 || mp[*itr] == 2 && mp[*itr1] == 3 ) {
        coutd("Yes");
    } else {
        coutd("No");
    }
    
    
    
    return 0;
    
}