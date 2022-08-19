// AGC015 - A
// 20%
// rnd
// NOTYET_BUTEASY


// -----     cpp_snippets_v8     -----
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


#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define coutds(N,X)            cout << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define dcoutd(X)               if(DEBUGGING) cout << X << endl
#define ddefined(Y)             if(DEBUGGING) ( Y )

#define INF                     1e18
#define ll                      long long int


#define DEBUGGING 1

using namespace std;

int ret = 0;
int point = 0;
map<int, int> mp;

void calc(ll ans, int num, int N, int A, int B) {
    if(num >= N-2) {
        mp[ans+A+B]++;
        if(mp[ans+A+B] == 1) ret++;
    } else {
        for(int i = A; i <= B; i++) {
            calc(ans+i, num+1,N, A, B);
        }
    }
}

int main() {
    int N, A, B; cin >> N >> A >> B;
    vector<ll> all(N);
    
    if(N==1 && A != B) ret = 0;
    else if(N==1 && A == B)  ret = 1;
    else if(A == B) ret = 1; 
    else calc(0,0,N, A, B);
    
    coutd(ret);
    return 0;
    
}