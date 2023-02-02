// ARC101 - A
// ASAKATSU
// rnd
// SHOULD?


// -----     cpp_snippets_v8.3     -----
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
#include <iomanip>
#include <sstream>

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))

#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     1e18
#define ll                      long long int


using namespace std;

int main() {
    int N, K; cin >> N >> K;
    set<ll> x;
    map<int,int> mp;
    int chk = 1;
    rep(i,N) {
        int temp; cin >> temp;
        x.insert(temp);
        if(temp == 0) {
            chk = 1;
            K--;
        }
    }
    if(chk) x.insert(0);

    ll ans1 = 0;
    auto iterator = x.find(0);
    rep(i,K) {
        auto iterator1 = iterator, iterator2 = iterator, iterator3 = iterator, iterator4 = iterator;
        iterator1++; iterator2--;
        iterator3++; iterator4--; iterator3++; iterator4--;
        

        if(*iterator1 == INF) {
            ans1 += abs(*iterator - *(iterator2));
            x.erase(iterator);
            iterator = iterator2;
        } else if(*iterator2 == -INF) {
            ans1 += abs(*iterator - *(iterator1));
            x.erase(iterator);
            iterator = iterator1;
        } else {
            if(abs(*iterator - *iterator1) + abs(*iterator1 - *iterator3) < abs(*iterator - *iterator2)) + abs(*iterator2 - *iterator4) || abs(*iterator - *iterator1) + abs(*iterator1 - *iterator2) < abs(*iterator - *iterator2) + abs(*iterator2 - *iterator1)) {
                ans1 += abs(*iterator - *(iterator1));
                x.erase(iterator);
                iterator = iterator1;
            } else {
                ans1 += abs(*iterator - *(iterator2));
                x.erase(iterator);
                iterator = iterator2;
            }
        }
        

    }

    
  
    coutd(ans1);
    
    return 0;
    
}