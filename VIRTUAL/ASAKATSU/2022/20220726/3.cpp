// ARC126 - A
// ASAKATSU
// rnd
// NOT_YET

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


// -----     cpp_snippets_v4     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)

#define dcoutd(X)               if(DEBUGGING) cout << X << endl
#define ddefined(X)             if(DEBUGGING) { X }

#define INF                     1e18


#define DEBUGGING 1

using namespace std;


long long int n2,n3,n4;
long long int n2t, n3t, n4t;

long long int part1() {
    long long int ans = 0;
    if(n2 >= 5) {
        ans += n2/5;
        n2 -= 5*(n2/5);
    }
    return ans;
}
long long int part2() {
    long long int ans = 0;
    long long int min3 = min(n2/3,n4);
    if(min3 > 0) {
        n2 -= 3*min3;
        n4 -= min3;
        ans += min3;
    }
    return ans;
}
long long int part3() {
    long long int ans = 0;
    long long int min2 = min(n3/2,n4);
    if(min2 > 0) {
        n3 -= 2*min2;
        n4 -= min2;
        ans += min2;
    }
    return ans;
}
long long int part4() {
    long long int ans = 0;
    long long int min1 = min(n2,n3);
    if(min1 >= 2) {
        n2 -= 2*(min1/2);
        n3 -= 2*(min1/2);
        ans += min1/2;
    }
    return ans;
}

long long int part5() {
    long long int ans = 0;
    long long int min5 = min(n3/2,n2/2);
    if(min5 > 0) {
        n3 -= 2*min5;
        n2 -= 2*min5;
        ans += min5;
    }
    return ans;
}

long long int scan() {
    long long int truans = 0;
    rep(i,5) rep(j,5) rep(k,5) rep(l,5) rep(m,5) {
        long long int ans = 0;
        if(i==j || i==k || i==l || i==m || j==k || j==l || j==m || k==l || k==m || l==m) continue;
        n2 = n2t; n3 = n3t; n4 = n4t;
        if(i==0) ans += part1();
        if(i==1) ans += part2();
        if(i==2) ans += part3();
        if(i==3) ans += part4();
        if(i==4) ans += part5();

        if(j==0) ans += part1();
        if(j==1) ans += part2();
        if(j==2) ans += part3();
        if(j==3) ans += part4();
        if(j==4) ans += part5();

        if(k==0) ans += part1();
        if(k==1) ans += part2();
        if(k==2) ans += part3();
        if(k==3) ans += part4();
        if(k==4) ans += part5();

        if(l==0) ans += part1();
        if(l==1) ans += part2();
        if(l==2) ans += part3();
        if(l==3) ans += part4();
        if(l==4) ans += part5();

        if(m==0) ans += part1();
        if(m==1) ans += part2();
        if(m==2) ans += part3();
        if(m==3) ans += part4();
        if(m==4) ans += part5();

        chmax(truans,ans);
    }
    

    
    
    
    
    
    

    

    
    return truans;
}

int main() {
    int T; cin >> T;
    rep(i,T) {
        cin >> n2 >> n3 >> n4;
        n2t = n2; n3t = n3; n4t = n4;
        coutd(scan());
    }
    
    
    
    return 0;
    
}