// ABC238 - C
// ASAKATSU
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



ll N;



int func(ll n) {

    if(n == 0) {
        return 1;
    }
    if(n == 1) {
        return 1+2;
    }
    if(n == 2) {
        return 1+2+3;
    }
    if(n == 3) {
        return 1+2+3+4;
    }
    if(n == 4) {
        return 1+2+3+4+5;
    }
    if(n == 5) {
        return 1+2+3+4+5+6;
    }
    if(n == 6) {
        return 1+2+3+4+5+6+7;
    }
    if(n == 7) {
        return 1+2+3+4+5+6+7+8;
    }
    if(n == 8) {
        return 1+2+3+4+5+6+7+8+9;
    }
    
}

ll calc(ll n) {
    ll bai = 0;
    for (ll i = 1; i <= N/10; i++) {
        bai += 45;
    }
    return bai;
}

ll check (ll n) {
    ll point = 10;
    while(1) {
        if(n/point < 10) {
            break;
        }
        point *= 10;
    }
    point = calc(point);
    return point;
}



int main() {
     cin >> N;
    ll ans = 0;
    ll bai = 0;
    if(N>=10) {
        for (ll i = 10; i <= N; i++) {
            ans += check(i);
        }
        ans += func(N%10);
        
    } else {
        ans += func(N-1);
    }
    coutd(ans%998244353);
    return 0;
    
}