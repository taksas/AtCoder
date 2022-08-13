// ABC264 - C
// DIFF
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

    map<pair<int,int>,int> mp;
    map<int,int> kasane;
    
    int H1, W1; cin >> H1 >> W1;
    vvii(A,H1,W1);
    rep(i, H1) rep(j, W1) {
        cin >> A[i][j];
    }
    int H2, W2; cin >> H2 >> W2;

    if(H2>H1 || W2>W1) {
        coutd("No");
        return 0;
    }

    rep(i, H2) rep(j, W2) {
        int temp; cin >> temp;
        int cnf = 1;
        rep(i2, H1) rep(j2, W1) {
            if(A[i2][j2] == temp) {
                mp[{i2,j2}] = 0 - abs(temp);
                kasane[0 - abs(temp)]++;
                cnf = 0;
            }
        }
        if(cnf) {
            coutd("No");
            return 0;
        }
    }

    rep(i, H1) rep(j, W1) {
        if(mp[{i,j}] == 0) {
            int check = 2, ch1 = 0, ch2 = 0;
            int i2t,j2t;
            rep(j2, W1) {
                if(mp[{i,j2}] != 0) {
                    kasane[0 - abs(A[i][j2])]--;
                    if(kasane[0 - abs(A[i][j2])] <= 0) check--;
                    ch1++;
                    j2t =j2;
                    break;
                }
            }
            rep (i2, H1) {
                if(mp[{i2,j}] != 0) {
                    kasane[0 - abs(A[i2][j])]--;
                    if(kasane[0 - abs(A[i2][j])] <= 0) check--;
                    ch2++;
                    i2t =i2;
                    break;
                }
            }

            if(check == 0) {
                coutd("No");
                return 0;
            } else {
                if(ch1) kasane[0 - abs(A[i][j2t])]++;
                if(ch2) kasane[0 - abs(A[i2t][j])]++;
            }
        }
    }


    

    
    coutd("Yes");
    return 0;
    
}