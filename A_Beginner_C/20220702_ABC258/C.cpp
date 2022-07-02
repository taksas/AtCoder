// ABC258 - C
// 1st
// YAY!!

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>

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
    long long int N, Q; cin >> N >> Q;
    string S; cin >> S;
    long long int xi = 0;
    while(Q--) {
        int t, x; cin >> t >> x;
        if(t == 1) {
            xi += x;
        } else {
            
            long long int tempwhile = (x - xi)%N -1;
            while(tempwhile < 0) {
                tempwhile = N + (x - xi)%N -1;
            }

            char tempc2 = S[tempwhile];
            coutd(tempc2);
        }
    }
    
    
    
    return 0;
    
}