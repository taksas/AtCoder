// ABC210 - C
// 50%
// 1st
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
    int N, K; cin >> N >> K;
    vector<int> C(N);
    map<long int, int> mp;
    rep(i,N) cin >> C[i];


    int maxim = 0;




    rep(i,K) {
        if(mp[C[i]] == 0) maxim++;
        mp[C[i]]++;
    }



    int temp = maxim;
    int te = 0;
    for(int i = K; i < N; i++) {
        
        
        if(mp[C[te]] == 1) temp--;
        if(mp[C[i]] == 0) temp++;
        
        mp[C[te]]--;       
        mp[C[i]]++;
        
        maxim = max(maxim, temp);
        // coutd(i << " ! " << N  << " ! " << mp[C[te]] << " - " << C[te] << te << "<="<< " ! " << mp[C[i]] << " -" << C[i] << " ! " << maxim << " ! " << temp);
        te++;
    }
    
    coutd(maxim);

    return 0;
    
}