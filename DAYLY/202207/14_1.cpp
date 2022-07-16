// ABC149 - D
// 20%
// 1st
// COPYED_PROCEED

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
    int N, K, R, S, P; cin >> N >> K >> R >> S >> P;
    string st; cin >> st;
    vector<vector<char>> L(K, vector<char>(N/K+2));
    map<int,int> mp;
    int ret = 0;
    
    for(int i = 0; i < N; i++) {
        char temp = st[i];
        if(!i) {
            L[0][mp[0]++] = temp;
            coutd("!");
            continue;
        }
        coutd(i%K);
        L[i%K][mp[i%K]++] = temp;
    }
    
    

    rep(i,K) {
        rep(j,mp[j]) {
            if(!j) {
                if(L[i][j]  == 'r') {
                    ret += P;
                } else if(L[i][j] == 's') {
                    ret += R;
                } else {
                    ret += S;
                }
                coutd(L[i][j]);
                continue;
            }

            if(j/2 == 0 || L[i][j] != L[i][j-1]) {
                if(L[i][j]  == 'r') {
                    ret += P;
                } else if(L[i][j] == 's') {
                    ret += R;
                } else {
                    ret += S;
                }
            coutd(L[i][j] << "!" << j);
            }
        }
    }
    
    coutd(ret);
    return 0;
    
}