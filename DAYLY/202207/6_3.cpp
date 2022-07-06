// ABC258 - B
// 1st
// YAY!! (NOT_NEED)

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
    int A[10][10];
    rep(i,N) {
        rep(j,N) {
            char temp; cin >> temp;
            A[i][j] = temp - '0';
        } 
    }

    int y[8] = {-1, 0, 1, -1, 1, -1, 0, 1}, x[8] = {1, 1, 1, 0, 0, -1, -1, -1};


    long long int maxim = 0;
    rep(i,N) {
        rep(j,N) {

            rep(k,8) {
                int x1 = i, y1 = j;
                long long int r = 0;
                rep(l,N) {
                    r *= 10;
                    r += A[x1][y1];
                    x1 += x[k]; x1 += N; x1 %= N;
                    y1 += y[k]; y1 += N; y1 %= N;
                    ;
                }
                maxim = max(maxim, r);
            }
        }
    }

    coutd(maxim);

    
    
    return 0;
    
}