// abc258 - B
// 1st
// COPYED

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

#define vvii(X,n1,n2)            vector<vector<int>> X(n1,vector<int>(n2))
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
    int N; cin >> N;
    vector<int> x = {1, 1, 1, 0, 0, -1, -1, -1 }, y = {1, 0, -1, 1, -1, 1, 0, -1 };
    vvllll(a,N,N);
    rep(i,N) {
        rep(j,N) {
            char temp; cin >> temp;
            a[i][j] = temp - '0';
        }
    }

    long long int maxim = 0;
    rep(i,N) {
        rep(j,N) {

            rep(l,8) {
            long long int maximt = 0;
            long long int x1 = i, y1 = j;
            rep(k,N) {
                maximt *= 10;
                

                        maximt += a[x1][y1];

                        x1 += x[l]; x1 %= N; x1 += N; x1 %= N;
                        y1 += y[l]; y1 %= N; y1 += N; y1 %= N;
                        maxim = max(maxim, maximt); 
                

                
            }
            }
        }
    }

    coutd(maxim);
    
    
    
    return 0;
    
}