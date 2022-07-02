// keyence2021 - B

// NOT_YET

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

#define rep(i,n)      for (int i = 0; i < n; i++)
#define repe(i,n)     for (int i = 0; i <= n; i++)
#define rrep(i,n)     for (int i = n; i > 0; i--)
#define rrepe(i,n)    for (int i = n; i >= 0; i--)
#define vrep(X)       for (auto&& x : X)

#define vpii(X)       vector<pair<int, int>> X
#define vpss(X)       vector<pair<string, string>> X
#define vpcc(X)       vector<pair<char, char>> X
#define vpis(X)       vector<pair<int, string>> X
#define vpic(X)       vector<pair<int, char>> X
#define vpsi(X)       vector<pair<string, int>> X
#define vpsc(X)       vector<pair<string, char>> X
#define vpci(X)       vector<pair<char, int>> X
#define vpcs(X)       vector<pair<char, string>> X
#define vint(X)       vector<int> X
#define vchar(X)      vector<string> X
#define vstring(X)    vector<char> X

#define bgen(X)       begin(X), end(X)
#define coutd(X)      cout << X << endl


using namespace std;

int main() {
    int N, K; cin >> N >> K;
    map<int,int> mp;
    int maxim = 0;
    vector<int> RET(K);

    vrep(RET) {
        x = -1;
    }
    rep(i,N) {
        int temp; cin >> temp;
        maxim = max(maxim, temp);
        mp[temp]++;
    }
    int ender = 0, retint = 0;;
    rep(i,maxim) {
        rep(j,K) {
            if(mp[i] > 0) {
                mp[i]--;
            } else {
                if(RET[j] == -1) {
                    retint += i;
                    RET[j] = 0;
                    ender++;
                }
            }
        }
        if(ender == K) break;
    }
    
    
    rep(i,K) {
        if(RET[i] == -1) retint += maxim + 1;
    }
    
    coutd(retint); 
    return 0;
    
}