// ABC143 - D
// 21%
// rnd
// SHOULD?


// -----     cpp_snippets_v8.4.1     -----
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
#include <unordered_set>

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))

#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     8e18
#define ll                      long long int


using namespace std;

int ans = 0;
int N;
map<int,int> mp;
vector<int> sel(3);

void search(int depth,int bef, vector<int>& L) { 
    if(depth == 2) {
        for(int i = sel[1]+1; i < N; i++) {
            sel[2] = i;
            ans += mp[L[sel[0]] - L[sel[1]]];
        }
        return;
    }
    sel[depth] = bef+1;
    search(depth+1,bef+1,L);
    if(bef+2 < N) search(depth,bef+1,L);
    return;
}

int main() {
    cin >> N;
    vector<int> L(N); rep(i,N) cin >> L[i];
    rep(i,N) rep(j,N) rep(k,N) if(L[i] - L[j] < L[k]) mp[L[i] - L[j]]++;

    search(0,-1,L);
    coutd(ans);
    return 0;
    
}