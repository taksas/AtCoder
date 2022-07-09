// ABC259 - D
// REALTIME
// 1st
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


#define rep(i,n)                for (int i = 0; i < n; i++)
#define repe(i,n)               for (int i = 0; i <= n; i++)
#define rrep(i,n)               for (int i = n; i > 0; i--)
#define rrepe(i,n)              for (int i = n; i >= 0; i--)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))

#define vpii(X)                 vector<pair<int, int>> X
#define vpss(X)                 vector<pair<string, string>> X
#define vpcc(X)                 vector<pair<char, char>> X
#define vpis(X)                 vector<pair<int, string>> X
#define vpic(X)                 vector<pair<int, char>> X
#define vpsi(X)                 vector<pair<string, int>> X
#define vpsc(X)                 vector<pair<string, char>> X
#define vpci(X)                 vector<pair<char, int>> X
#define vpcs(X)                 vector<pair<char, string>> X
#define vint(X)                 vector<int> X
#define vchar(X)                vector<string> X
#define vstring(X)              vector<char> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl


using namespace std;

int main() {
    int r = 0;
    int N; cin >> N;
    int sx, sy, tx, ty; cin >> sx >> sy >> tx >> ty;
    map<int, pair<int, int>> mp;
    vector<int> rv(N);
    rep(i,N) {
        int x, y, r; cin >> x >> y >> r;
        rv[i] = r;
        mp.insert( { r, {x, y} } );
      //  coutd(sqrt(abs(r-x)*abs(r-x)+abs(r-y)*abs(r-y)));
    }
    int chk1 = 0, chk2 = 0;
    rep(i,N) {
        int x, y, r;
        r = rv[i];
        x = mp[r].first;
        y = mp[r].second;
        if (sqrt(abs(sx-x)*abs(sx-x)+abs(sy-y)*abs(sy-y)) == r) {
            chk1 = 1;
        }
        if (sqrt(abs(tx-x)*abs(tx-x)+abs(ty-y)*abs(ty-y)) == r) {
            chk2 = 1;
        }
    }

    if(chk1 == 0 || chk2 == 0) {
        coutd("No");
        return 0;
    }

/*
    rep(i,N) {
        int x, y, r;
        r = rv[i];
        x = mp[r].first;
        y = mp[r].second;
        rep(j,N) {
            if (i == j) continue;

            int x1, y1, r1;
            r1 = rv[j];
            x1 = mp[r1].first;
            y1 = mp[r1].second;
            if (x == x1 && y == y1) continue;

            if (sqrt(abs(x1-x)*abs(x1-x)+abs(y1-y)*abs(y1-y)) <= r+r1) {
                coutd(x << "!" << y << "!" << r << "!" << x1 << "!" << y1 << "!" << r1);
            }
            coutd(r);
        }
    }
    
*/

    r = 1; // kusogomi
    if(r) coutd("Yes");
    else coutd("No");
    return 0;
    
}