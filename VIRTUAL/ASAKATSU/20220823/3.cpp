// AAA000 - Q
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
    int N; cin >> N;
    multiset<int> A;
    rep(i,N) {
        int temp; cin >> temp;
        A.insert(temp);
    }

    while(1) {
        if(A.size() == 1) break;
        auto itr1 = A.begin();
        auto itr2 = A.begin();
        itr2++;
        int ret = *itr2%*itr1;
        A.erase(itr2);
        if(ret)  A.insert(ret);
    }
    auto itr = A.begin();
    coutd(*itr);
    
    return 0;
    
}